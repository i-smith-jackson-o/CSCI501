// Bubble Sort Implementation
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::vector; 
using std::ifstream; 
using std::string; 

void populateArr(vector<int>& arr, string fileName) {
  int temp; 
  ifstream inputFile; 

  inputFile.open(fileName); 
  for (int i = 0; i < 100000; i++) {
    inputFile >> temp; 
    arr.push_back(temp); 
  }
  inputFile.close(); 
}

void bubbleSort(vector<int>& array) {
  bool swap; 
  int temp; 

  do {
    swap = false; 
    for (int i = 0; i < array.size(); i++) {
      if (array[i] > array[i+1]) {
	temp = array[i]; 
	array[i] = array[i+1]; 
	array[i+1] = temp; 
	swap = true; 
      }
    }
  } while (swap); 
}


int main() {
  string fileName = "100kIntegers.txt"; 
  vector<int> arr {}; 

  populateArr(arr, fileName); 
  bubbleSort(arr); 
  for (int i = 0; i < arr.size(); i++)
    std::cout << arr[i] << std::endl; 

  return 0; 
}

