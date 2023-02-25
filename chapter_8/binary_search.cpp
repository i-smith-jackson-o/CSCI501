#include <iostream>
#include <vector>

int binarySearchArray(const int arr[], int size, int value) {
  int idx = 0, 
      last = size - 1, 
      mid, 
      pos = -1; 
  bool found = false; 

  while (!found && idx <= last) {
    mid = (idx+ last) / 2; 
    if (arr[mid] == value) {
      found = true; 
      pos = mid; 
    }
    else if (arr[mid] > value)
      last = mid - 1; 
    else 
      idx = mid + 1; 
  }
  return pos; 
}

int binarySearchVector(std::vector<int>& vec, int value) {
  int idx = 0, 
      last = vec.size() - 1, 
      mid, 
      pos = -1; 
  bool found = false; 

  while (!found && idx <= last) {
    mid = (idx+ last) / 2; 
    if (vec[mid] == value) {
      found = true; 
      pos = mid; 
    }
    else if (vec[mid] > value)
      last = mid - 1; 
    else 
      idx = mid + 1; 
  }
  return pos; 
}

void printResult(int result, int value) {
  if (result == -1)
    std::cout << value << " not found.\n"; 
  else {
    std::cout << value << " found at index " << result  << "." << std::endl; 
  }
}

int main() {
  const int SIZE = 10; 
  int testArr[SIZE] = {12, 15, 23, 26, 31, 36, 42, 46, 48, 53}; 
  std::vector<int> testVec{12, 15, 23, 26, 31, 36, 42, 46, 48, 53}; 
  int value = 42; 
  
  int arrResult = binarySearchArray(testArr, SIZE, value); 
  int vecResult = binarySearchVector(testVec, value); 

  printResult(arrResult, value); 
  printResult(vecResult, value); 
  return 0; 
}
