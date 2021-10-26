/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
  /**
   * @todo Implement this function!
   */
  
  if (first[curDim] < second[curDim]) {
    return true;
  } else if (first[curDim] == second[curDim]) {
    return first < second;
  }
  return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
  /**
   * @todo Implement this function!
   */
  
  double current = 0;
  double potential_dist = 0;
  for (int i = 0; i < Dim; i++) {
    current += (target[i] - currentBest[i]) * (target[i] - currentBest[i]);
    potential_dist += (target[i] - potential[i]) * (target[i] - potential[i]);
  }
  
  if (potential_dist < current) {
    return true;
  } else if (potential_dist == current) {
    return potential < currentBest;
  }
  return false;
}

template <int Dim>
unsigned KDTree<Dim>::partition(vector<Point<Dim>>& list, int dim, unsigned l, unsigned r, unsigned pivotIndex) {
  Point<Dim> pivot = list[pivotIndex];
  Point<Dim> temp = list[pivotIndex];
  list[pivotIndex] = list[r];
  list[r] = temp;
  unsigned storeIndex = l;
  for(unsigned i = l; i < r; i++) {
    if(smallerDimVal(list[i], pivot, dim)) {
      temp = list[storeIndex];
      list[storeIndex] = list[i];
      list[i] = temp;
      storeIndex++;
    }
  }
  temp = list[storeIndex];
  list[storeIndex] = list[r];
  list[r] = temp;
  return storeIndex;
}


template <int Dim>
Point<Dim> KDTree<Dim>::select(vector<Point<Dim>>& p, int dim, unsigned l, unsigned r, unsigned n) {
  if(l == r) {
    return p[l];
  }
  unsigned median = n; 
  median = partition(p, dim, l, r, n);
  if(n == median) {
    return p[n];
  } else if (n < median) {
    return select(p, dim, l, median - 1, n);
  }
  return select(p, dim, median + 1, r, n);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::buildTree(vector<Point<Dim>>& p, int dim, unsigned l, unsigned r) {
  if(r < l || l >= p.size() || r >= p.size()) { 
    return NULL; 
  } 
  unsigned med = (l + r) / 2; 
  Point<Dim> temp = select(p, dim % Dim, l, r, med);
  KDTreeNode* subroot = new KDTreeNode(temp); 
  size++;
  dim++;
  subroot->right = buildTree(p, dim, med + 1, r); 
  subroot->left = buildTree(p, dim, l, med - 1); 
  return subroot;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
  /**
   * @todo Implement this function!
   */
  if (newPoints.empty()) {
    size = 0;
    root = NULL;
  }
  size = 0;
  vector<Point<Dim>> points;
  points.assign(newPoints.begin(), newPoints.end());
  root = buildTree(points, 0, 0, points.size() - 1);
}

template <int Dim>
void KDTree<Dim>::copy(KDTreeNode* subroot, KDTreeNode* other) {
  subroot = new KDTreeNode();
  subroot->point = other->point;
  copy(subroot->left, other->left);
  copy(subroot->right, other->right);
}

template <int Dim>
void KDTree<Dim>::clear(KDTreeNode* root) {
  if (root == NULL) {
    return;
  }
  clear(root->left);
  clear(root->right);
  delete root;
  root = NULL;
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
  copy(this->root, other->root);
  size = other.size();
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
  clear(this->root);
  copy(this->root, rhs->root);
  size = rhs.size();
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
  clear(root);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
  /**
   * @todo Implement this function!
   */
  
  return findNearestNeighbor(query, 0, root);
}


template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, size_t dim, KDTreeNode* curRoot) const {
    if (curRoot->left == NULL && curRoot->right == NULL) {
      return curRoot->point;
    }
    
    Point<Dim> nearest = curRoot->point;
    bool leftrecursed = false;
    
    if (smallerDimVal(query, curRoot->point, dim)) {
      leftrecursed = true;
      if (curRoot->left) {
        nearest = findNearestNeighbor(query, (dim + 1) % Dim, curRoot->left);
      }
    }
    else {
      if (curRoot->right) {
        nearest = findNearestNeighbor(query, (dim + 1) % Dim, curRoot->right);
      }
    }
    
    if (shouldReplace(query, nearest, curRoot->point)) {
      nearest = curRoot->point;
    }
    
    size_t radius = 0;
    for (size_t i = 0; i < Dim; ++i) {
      radius += (query[i] - nearest[i]) * (query[i] - nearest[i]);
    }
    size_t splitDist = (curRoot->point[dim] - query[dim]) * (curRoot->point[dim] - query[dim]); // split distance on plane
    
    if (radius >= splitDist) {
      Point<Dim> tempNearest = curRoot->point;
      if (leftrecursed) {
        if (curRoot->right) {
          tempNearest = findNearestNeighbor(query, (dim + 1) % Dim, curRoot->right);
        }
      }
      else if (curRoot->left) {
        tempNearest = findNearestNeighbor(query, (dim + 1) % Dim, curRoot->left);
      }
      if (shouldReplace(query, nearest, tempNearest))
        nearest = tempNearest;
    }
    return nearest;
  }