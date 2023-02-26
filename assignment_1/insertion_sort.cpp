// insertion sort
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::string; 


void insertionSort(int arr[], int); 
//void insertionSort(vector<int>& arr); 
void showArray(const int arr[], int); 
//void populateArr(vector<int>& arr, string fileName); 
//void showVec(const vector<int>& arr); 


int main() {
  string fileName = "100kIntegers.txt"; 
  int arr[25] = { 12, 42, 35, 76, 23, 76, 35, 86, 
		      25, 98, 46, 65, 24, 70, 60, 23, 
		      14, 99, 91, 37, 33, 66, 75, 42, 11}; 
  showArray(arr, 25); 
  insertionSort(arr, 25); 
  showArray(arr, 25); 
  return 0; 
}

void insertionSort(int arr[], int) {

}

void showArray(const int arr[], int) {

}
