// Write a program with an array of at least 20 integers. 
// Call a function that uses a linear search to locate one of 
// the values, keeping a count of the number of comparisons 
// it makes until it finds the value. 
// The program should then call a function that uses the binary search 
// algorithm to locate the same value. Display the number of 
// comparisons for each on the screen. 

#include <iostream>
#include <array>
#include <memory>

// Function prototype
int linearSearch(int[], int, int); 
int binarySearch(int[], int, int); 
void insertionSort(int[], int); 

int main() {
  int arr[33] = { 12, 35, 46, 76, 35, 76, 36, 65, 35, 86, 91, 
		  85, 35, 86, 64, 84, 56, 53, 75, 34, 65, 99, 
		  13, 64, 87, 86, 35, 87, 75, 24, 75, 35, 75 }; 

  int size = sizeof(arr) / sizeof(arr[0]); 
  int linearA, linearB, binary, v; 

  std::cout << "Enter the value to search for: "; 
  std::cin >> v; 


  std::cout << "Sorting the array..." << std::endl; 
  insertionSort(arr, size); 
  
  std::cout << "Linear Search: \n"; 
  linearB = linearSearch(arr, size, v); 
  std::cout << linearB << " comparisons to locate " << v << ".\n" << std::endl; 

  std::cout << "Binary Search: \n"; 
  binary = binarySearch(arr, size, v); 
  std::cout << binary << " comparisons to locate " << v << "."; 

  std::cout << std::endl; 
  return 0; 
}

void insertionSort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int key = arr[i]; 
    int j = i - 1; 
    while (j >= 0 && arr[j] > key) {
      arr[j+1] = arr[j]; 
      j = j-1; 
      arr[j + 1] = key; 
    }
  }
}

int linearSearch(int arr[], int size, int value) {
  int comp = 0; 
  int i = 0, 
      position = -1; 
  bool found = false; 

  while (i < size && !found) {
    if (arr[i] == value) {
      comp++; 
      found = true; 
      position = i; 
    }
    i++; 
    comp++; 
  }
  return comp; 
}

int binarySearch(int arr[], int size, int value) {
  int comp = 0, 
      first = 0, 
      last = size - 1, 
      middle, 
      position = -1; 
  bool found = false; 

  while (!found && first <= last) {
    middle = (first + last) / 2; 
    if (arr[middle] == value) {
      comp++; 
      found = true; 
      position = middle; 
    } else if (arr[middle] > value) {
	comp++; 
        last = middle - 1; 
    } else { 
	comp++; 
	first = middle + 1; 
    }
  }
  return comp; 
}

int inputValSearch(int arr[], int size) {

}
