// insertion sort
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::string; 
using std::vector; 

void insertionSort(int arr[], int); 
void insertionSort(vector<int>& arr); 
void showArray(const int arr[], int); 
void populateVec(vector<int>& arr, string fileName); 
void showVec(vector<int>& arr); 


int main() {
  string fileName = "100kIntegers.txt"; 
  vector<int> vec {}; 
  int arr[25] = { 12, 42, 35, 76, 23, 76, 35, 86, 
		      25, 98, 46, 65, 24, 70, 60, 23, 
		      14, 99, 91, 37, 33, 66, 75, 42, 11}; 
  std::cout << "Unsorted\n"; 
  showArray(arr, 25); 
  insertionSort(arr, 25); 
  std::cout << "Sorted\n"; 
  showArray(arr, 25); 

  populateVec(vec, fileName); 
  insertionSort(vec); 
  showVec(vec); 

  return 0; 
}

void populateVec(vector<int>& arr, string fileName) {
  int temp; 
  std::ifstream inputFile; 

  inputFile.open(fileName); 

  for (int i = 0; i < 100000; i++) {
    inputFile >> temp; 
    arr.push_back(temp); 
  }
  inputFile.close(); 
}

void insertionSort(vector<int>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    int key = arr[i]; 
    int j = i - 1; 
    while (j >= 0 && arr[j] > key) {
      arr[j+1] = arr[j]; 
      j = j-1; 
      arr[j + 1] = key; 
    }
  }
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

void showArray(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " "; 
  }
  std::cout << std::endl; 
}

void showVec(vector<int>& arr) {
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << " "; 
    std::cout << std::endl; 
  }
  for (int i = arr.size() - 1; i > arr.size() - 11; --i) {
    std::cout << arr[i] << " "; 
  }
}
