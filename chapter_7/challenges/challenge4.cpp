// Write a function that accepts three arguments: 
// an array, the size of the array, and a number n. 
// the function should display all numbers in the array 
// that are greater than n.

// Function Prototype
void largerThanN(int[], int, int); 

#include <iostream>

int main() {
  int size = 15; 
  int arr[15] = {12, 15, 74, 45, 35,
         	 75, 73, 83, 15, 63, 
	         53, 97, 47, 26, 56}; 
  int n = 42; 

  largerThanN(arr, n, size); 
  return 0; 
}

void largerThanN(int arr[], int n, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] > n)
      std::cout << arr[i] << " "; 
  }
}
