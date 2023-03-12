//  Modify the binarySearch function so it searchs an array of strings 
//  instead of an array of ints. Test the function with a driver program. 
//  use program 8-8 as a skeleton to complete. the array must be sorted 
//  before the binary search will work. 

#include <iostream>
#include <string>
#include <array>
using std::string; 

// Function Prototypes
void selectionSort(string[], int); 
int binarySearch(const string[], string, int); 

int main() {
  string names[] = { 
    "Collins, Bill", "Smith, Bart",  "Allen, Jim", 
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
    "Taylor, Terri", "Johnson, Jill", 
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
    "James, Jean", "Weaver, Jim", "Pore, Bob", 
    "Rutherford, Greg", "Javens, Renee", 
    "Harrison, Rose", "Setzer, Cathy", 
    "Pike, Gordon", "Holland, Beth" 
  }; 
  string name; 
  int results, 
      size = sizeof(names) / sizeof(names[0]); 

  std::cout << "Enter the name you wish to search for: "; 
  std::getline(std::cin, name); 
  selectionSort(names, size); 

  results = binarySearch(names, name, size); 

  if (results == -1)
    std::cout << "The name was not found." << std::endl; 
  else {
    std::cout << name << " was found at element " << results; 
    std::cout << " in the array." << std::endl; 
  }
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

int binarySearch(const string arr[], string value, int size) {
  int first = 0, 
      last = size - 1, 
      middle, 
      position = -1; 
  bool found =  false; 

  while (!found && first <= last) {
    middle = (first + last) / 2; 
    if (arr[middle] == value) {
      found = true; 
      position = middle; 
    } else if (arr[middle] > value)
      last = middle - 1;
    else
     first = middle + 1;
  }
  return position; 
}
