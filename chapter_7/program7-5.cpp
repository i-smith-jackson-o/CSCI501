#include <iostream>
using namespace std; 

int main() {
  const int SIZE = 5; 
  int values[SIZE];
  int count; 

  int empNums[100]; 

  cout << "Expecting a segfault...\n"; 

  cout << "I will store 5 numbers in a three-element array.\n"; 
  for (count = 0; count < 5; count++)
    values[count] = 100; 

  for (count = 0; count < 100; count++)
    cout << empNums[count] << endl; 
  return 0; 
}
