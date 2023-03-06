// Specification file for the NumberList class
#ifndef NUMBERLIST_H 
#define NUMBERLIST_H
#include <iostream>

class NumberList {
private: 
  // Delcare a structure for the list
  struct ListNode {
    double value; 
    struct ListNode *next; 
  }; 

  ListNode *head; 

  int countNodes(ListNode *) const; 
  void showReverse(ListNode *) const; 

public: 
  NumberList()
      { head = nullptr; }

  ~NumberList(); 

  void appendNode(double); 
  void insertNode(double); 
  void deleteNode(double); 
  void displayList() const; 
  int numNodes() const { return countNodes(head); }
  void displayBackwards() const { showReverse(head); }
}; 
#endif

void NumberList::appendNode(double num) {
  ListNode *newNode; 
  ListNode *nodePtr; 

  // Allocate a new node and store num there. 
  newNode = new ListNode; 
  newNode->value = num; 
  newNode->next = nullptr; 

  // If there are no nodes in the list 
  // make newNode the first node. 
  if (!head)
    head = newNode; 
  else {
    nodePtr = head; 

    while (nodePtr->next)
      nodePtr = nodePtr->next; 

    nodePtr->next = newNode; 
  }
}

void NumberList::displayList() const {
  ListNode *nodePtr; 
  nodePtr = head; 
  while(nodePtr) {
    std::cout << nodePtr->value << std::endl; 
    nodePtr = nodePtr->next; 
  }
}

void NumberList::insertNode(double num) {
  ListNode *newNode; 
  ListNode *nodePtr; 
  ListNode *previousNode = nullptr; 

  newNode = new ListNode; 
  newNode ->value = num; 

  if (!head) {
    head = newNode; 
    newNode->next = nullptr; 
  } else {
    nodePtr = head; 
    previousNode = nullptr; 
    while (nodePtr != nullptr && nodePtr->value < num) {
      previousNode = nodePtr; 
      nodePtr = nodePtr->next;
    }
    if (previousNode == nullptr) {
      head = newNode; 
      newNode->next = nodePtr; 
    }
    else {
      previousNode->next = newNode; 
      newNode->next = nodePtr; 
    }
  }
}

void NumberList::deleteNode(double num) {
  ListNode *nodePtr; 
  ListNode *previousNode; 

  if (!head)
    return; 
  if (head->value == num) {
    nodePtr = head ->next; 
    delete head; 
    head = nodePtr; 
  } else {
    nodePtr = head; 

    while (nodePtr != nullptr && nodePtr->value != num) {
      previousNode = nodePtr; 
      nodePtr = nodePtr->next; 
    }
    if (nodePtr) {
      previousNode->next = nodePtr->next; 
      delete nodePtr; 
    }
  }
}

NumberList::~NumberList() {
  ListNode *nodePtr; 
  ListNode *nextNode; 

  nodePtr = head; 

  while (nodePtr != nullptr) {
    nextNode = nodePtr->next; 
    delete nodePtr; 
    nodePtr = nextNode; 
  }
}

int NumberList::countNodes(ListNode *nodePtr) const {
  if (nodePtr != nullptr)
    return 1 + countNodes(nodePtr->next); 
  else
   return 0;
}

void NumberList::showReverse(ListNode *nodePtr) const {
  if (nodePtr != nullptr) {
    showReverse(nodePtr->next); 
    std::cout << nodePtr->value << " "; 
  }
}


