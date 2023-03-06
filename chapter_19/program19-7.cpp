// This program counts the nodes in a list. 
#include <iostream>
#include "NumberList.h"
using namespace std; 

int main() {
  const int MAX = 10; 
  NumberList list; 
  for (int x = 0; x< MAX; x++)
    list.insertNode(x); 

  cout << "The number of nodes is "
       << list.numNodes() << endl; 
  return 0; 
}
