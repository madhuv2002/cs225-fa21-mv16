/* Your code here! */
#include "dsets.h"


void DisjointSets::addelements(int num) {
  for (int i = 0; i < num; i++) {
    elems.push_back(-1);
  }
}

int DisjointSets::find(int elem) {
  if (elems[elem] >= 0) {
    elems[elem] = find(elems[elem]);
    return elems[elem];
  }
  return elem;
}

void DisjointSets::setunion(int a, int b) {
  if (find(a) == find(b)) {
    return;
  }
  if (find(a) > find(b)) {
    elems[find(b)] = elems[find(a)] + elems[find(b)];
    elems[find(a)] = find(b);
  } else {
    elems[find(a)] = elems[find(a)] + elems[find(b)];
    elems[find(b)] = find(a);
  }
}

int DisjointSets::size(int elem) {
  return elems[find(elem)] * -1;
}