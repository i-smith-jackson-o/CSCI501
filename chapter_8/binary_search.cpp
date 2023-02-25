#include <iostream>
#include <vector>
const int SIZE = 10; 

int binarySearchArray(const int arr[], int value) {
  int index = 0; 
  int position = -1; 
  int lastIndex = SIZE - 1; 
  bool found = false; 

  while(!found && index <= lastIndex) {
    int middle = lastIndex / 2; 
    if (value == arr[middle]) {
      found = true; 
      position = middle; 
    } else if (arr[middle] > value) {
      lastIndex = middle - 1; 
    } else {
      lastIndex = middle + 1; 
    }
  }
  return position; 
}

int binarySearchVector(std::vector<int>& vec, int value) {

  return 0; 
}

void printResult(int result, int value) {
  if (result == -1)
    std::cout << value << " not found.\n"; 
  else {
    std::cout << value << " found at index "(result + 1) << "." << std::endl; 
  }
}

int main() {
  // Values must first be sorted. 
  int testArr[SIZE] = {12, 15, 23, 26, 31, 36, 42, 46, 48, 53}; 
  std::vector<int> testVec{12, 15, 23, 26, 31, 36, 42, 46, 48, 53}; 
  int value = 42; 

  int arrRes = binarySearchArray(testArr, value); 
//  int vecRes = binarySearchVector(testVec, value); 

  printResult(arrRes, value); 
  printResult(vecRes, value); 
  return 0; 
}
