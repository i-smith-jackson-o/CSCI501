#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::vector; 
using std::string; 

void insertionSort(int arr[], int); 
void insertionSort(vector<int>& arr); 
void showArray(const int arr[], int); 
void populateArr(vector<int>& arr, string fileName); 
void showVec(const vector<int>& arr); 

int main() {
  string fileName = "100kIntegers.txt"; 
  std::vector<int> arr {}; 
  int testArr[25] = { 12, 42, 35, 76, 23, 76, 35, 86, 
		      25, 98, 46, 65, 24, 70, 60, 23, 
		      14, 99, 91, 37, 33, 66, 75, 42, 11}; 

  showArray(testArr, 25); 
  insertionSort(testArr, 25); 
  showArray(testArr, 25); 

  populateArr(arr, fileName); 
  insertionSort(arr); 
  showVec(arr); 
  return 0; 
}
void populateArr(vector<int>& arr, string fileName)  {
  int temp; 
  std::ifstream inputFile; 

  inputFile.open(fileName); 
  for (int i = 0; i < 100000; i++) {
    inputFile >> temp; 
    arr.push_back(temp); 
  }
  inputFile.close(); 
}

void insertionSort(int array[], int size) {
  for (int startScan = 0; startScan < size; startScan++ ) {
    int index = startScan, 
	minIndex = startScan, 
	minValue = array[startScan]; 
    for (index = startScan + 1; index < size; index++ ) {
      if (array[index] < minValue) {
	minValue = array[index]; 
	minIndex = index; 
      }
    }
    array[minIndex] = array[startScan]; 
    array[startScan] = minValue; 
  }
}

void insertionSort(vector<int>& arr) {
  for (int startScan = 0; startScan < arr.size(); startScan++ ) {
    int index = startScan, 
	minIndex = startScan, 
	minValue = arr[startScan]; 
    for (index = startScan + 1; index < arr.size(); index++ ) {
      if (arr[index] < minValue) {
	minValue = arr[index]; 
	minIndex = index; 
      }
    }
    arr[minIndex] = arr[startScan]; 
    arr[startScan] = minValue; 
  }
}

void showVec(const vector<int> & arr)  {
  for (int i = 0; i < arr.size(); i++)
    std::cout << i << " " << arr[i] << "\n"; 
  std::cout << std::endl; 
}

void showArray(const int array[], int size) {
  for (int i = 0; i < size; i++)
    std::cout << array[i] << " "; 
  std::cout << std::endl; 
}
