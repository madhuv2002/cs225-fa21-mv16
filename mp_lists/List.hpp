/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode* to_delete = head_;
  while (to_delete != NULL) {
    ListNode* temp = to_delete->next;
    delete to_delete;
    to_delete = temp;
  }
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    head_ = newNode;
    tail_ = newNode;
  } else {
    head_->prev = newNode;
    newNode->next = head_;
    head_ = newNode;
  }
  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1  
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    head_ = newNode;
    tail_ = newNode;
  } else {
    tail_->next = newNode;
    newNode->next = NULL;
    newNode->prev = tail_;
    tail_ = newNode;
  }
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode * curr = start;
  if (curr == NULL) {
    return NULL;
  }
  
  if (splitPoint == 0) {
    return curr;
  }
  if (splitPoint >= length_) {
    return curr;
  }
  
  for (int i = 0; i < splitPoint && curr != NULL; i++) {
    curr = curr->next;
  }
  
  curr->prev->next = NULL;
  curr->prev = NULL;
  return curr;
}

/**
 * Modifies List using the rules for a TripleRotate.
 *
 * This function will to a wrapped rotation to the left on every three 
 * elements in the list starting for the first three elements. If the 
 * end of the list has a set of 1 or 2 elements, no rotation all be done 
 * on the last 1 or 2 elements.
 * 
 * You may NOT allocate ANY new ListNodes!
 */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1
  ListNode * curr = head_; 
  
  if (!(length_ < 3)) { 
    head_ = curr->next;
    for (int i = 0; i < length_/3; i++) {
      // Create temp pointers for the 3 digits to rotate
      ListNode * one = curr;
      ListNode * two = curr->next;
      ListNode * three = curr->next->next;
      
      // update what the value after the third one points to
      // ex: 1, 2, 3, 4 : 4->prev should point to 1 after tripleRotate()
      if(three->next == NULL) { 
        one->next = NULL;
      } else {
        three->next->prev = one;
        one->next = three->next;
      }
      
      // update what the first value->prev should point to
      // _, _, 0, 1, 2, 3 : 0->next should point to 2 / vice-versa after tripleRotate()
      if(one->prev == NULL) { 
        two->prev = NULL;
      } else {
        one->prev->next = two;
        two->prev = one->prev;
      }
      // Rearrange so 1,2,3 becomes 2,3,1
      two->next = three;
      three->next = one;
      one->prev = three;
      three->prev = two;
      curr = one->next; 
    }
  }
}


/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  if (startPoint == endPoint) {
    return;
  }
  ListNode * pre = startPoint->prev;
  ListNode * end = endPoint->next;
  ListNode * curr = startPoint;
  
  while (curr != endPoint) {
    ListNode * temp = curr->next;
    curr->next = curr->prev;
    curr->prev = temp;
    curr= temp;
  }
  endPoint->next = curr->prev;
  endPoint->prev = pre;
  startPoint->next = end;
  if (pre != NULL) {
    pre->next = endPoint;
    endPoint->prev = pre;
  } else {
    head_ = endPoint;
  }
  
  if (end != NULL) {
    end->prev = startPoint;
    startPoint->next = end;
  } else {
    tail_ = startPoint;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  ListNode * start = head_;
  
  while (start != NULL) {
    ListNode * end = start;
    for (int i = 0; i < n - 1; i++) {
      if (end->next != NULL) {
        end = end->next;
      }
    }
    reverse(start, end);
    // reverse flips the head and tail pointers so start is now end
    start = start->next;
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
  // set up the current list
  head_ = merge(head_, otherList.head_);
  tail_ = head_;
  
  // make sure there is a node in the new list
  if (tail_ != NULL) {
    while (tail_->next != NULL)
      tail_ = tail_->next;
  }
  length_ = length_ + otherList.length_;
  
  // empty out the parameter list
  otherList.head_ = NULL;
  otherList.tail_ = NULL;
  otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if (first == NULL && second == NULL) {
    return NULL;
  }
  if (first == NULL) {
    return second;
  }
  if (second == NULL) {
    return first;
  }
  
  ListNode * curr;
  
  if (first->data < second->data) {
    curr = first;
    first = first->next;
  } else {
    curr = second;
    second = second->next;
  }
  ListNode * curr2 = curr;
  
  while (first && second) {
    ListNode * temp;
    if (first->data < second->data) {
      temp = first;
      first->prev = curr2;
      curr2->next = first;
      first = first->next;
    } else {
      temp = second;
      second->prev = curr2;
      curr2->next = second;
      second = second->next;
    }
    curr2 = temp;
  }
  
  if (first == NULL && second != NULL) {
    curr2->next = second;
    second->prev = curr2;
  }
  if (first != NULL && second == NULL) {
    curr2->next = first;
    first->prev = curr2;
  }
  // return the head
  return curr;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if (chainLength == 1) {
    return start;
  }
  
  ListNode* temp = split(start, chainLength/2);
  ListNode* first = mergesort(start, chainLength/2);
  ListNode* second = mergesort(temp, chainLength - chainLength/2);
  start = merge(first, second);
  return start;
  //  return NULL;
}
