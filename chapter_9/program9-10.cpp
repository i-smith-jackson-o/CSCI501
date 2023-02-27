// This program uses a pointer to display the contents 
// of an integer array
#include <iostream>
using namespace std; 

int main() {
  int set[8] = {5, 10, 15, 20, 25, 30, 35, 40}; 
  int *nums = set; 

  cout << "the numbers in set are:\n"; 
  cout << *nums << " "; // Display first element 
  while (nums < &set[7]) {
    nums++; 
    cout << *nums << " "; 
  }

  cout << "\nThe numbers in set backwards are:\n"; 
  cout << *nums << " "; 
  while (nums > set) {
    nums--; 
    cout << *nums << " "; 
  }
  cout << endl; 
  return 0; 
}
