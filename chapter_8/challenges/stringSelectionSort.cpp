#include <iostream>
#include <string>
using namespace std; 

// Function Prototypes
void selectionSort(string[], int); 
void displayArr(string[], int); 

int main() {
  const int NUM_NAMES = 20; 
  string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart",  "Allen, Jim", 
			      "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
			      "Taylor, Terri", "Johnson, Jill", 
			      "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
			      "James, Jean", "Weaver, Jim", "Pore, Bob", 
			      "Rutherford, Greg", "Javens, Renee", 
			      "Harrison, Rose", "Setzer, Cathy", 
			      "Pike, Gordon", "Holland, Beth" }; 

  selectionSort(names, NUM_NAMES); 
  displayArr(names, NUM_NAMES); 
  return 0; 
}

void selectionSort(string arr[], int size) {
  int startScan, minIndex; 
  string minValue; 

  for (startScan = 0; startScan < (size - 1); startScan++) {
    minIndex = startScan; 
    minValue = arr[startScan]; 
    for (int index = startScan + 1; index < size; index++) {
      if (arr[index] < minValue) {
	minValue = arr[index]; 
	minIndex = index; 
      }
    }
    arr[minIndex] = arr[startScan]; 
    arr[startScan] = minValue; 
  }
}

void displayArr(string arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }
}
