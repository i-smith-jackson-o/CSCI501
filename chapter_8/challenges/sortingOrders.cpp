// two identical arrays of 8 integers. 
// display contents of the array. 
// call function to sort array in asending order, 
// displaying the contents of the array after 
// each pass of the sort. 
// selection sort, bubble sort. 
#include <iostream>
#include <array>

// Function prototypes
void bubbleSort(int[], int); 
void selectionSort(int[], int); 
void displayArr(int[], int); 

int main() {
  int size = 8; 
  int arr[] = {13, 17, 3, 1, 11, 5, 19, 7}; 
  int arr2[] = {13, 17, 3, 1, 11, 5, 19, 7}; 

  std::cout << "Array: \n"; 
  displayArr(arr, size); 
  std::cout << "Bubble Sort: \n"; 
  bubbleSort(arr, size); 

  std::cout << "Array: \n"; 
  displayArr(arr2, size); 
  std::cout << "Selection Sort: \n"; 
  selectionSort(arr2, size); 

  return 0; 
}

void bubbleSort(int arr[], int size) {
  int temp; 
  bool swap; 

  do {
    swap = false; 
    for (int i = 0; i < (size - 1); i++) {
      if (arr[i] > arr[i+1]) {
	temp = arr[i]; 
	arr[i] = arr[i + 1]; 
	arr[i + 1] = temp; 
	swap = true; 
	for (int i = 0; i < size; i++) {
	  std::cout << arr[i] << " ";
	}
	std::cout << std::endl; 
      }
    }
  } while (swap); 
  displayArr(arr, size); 
}

void selectionSort(int arr[], int size) {
  int startScan, 
      minIndex, 
      minValue; 

  for (startScan = 0; startScan < (size - 1); startScan++) {
    minIndex = startScan; 
    minValue = arr[startScan]; 
    for (int index = startScan + 1; index < size; index++) {
      if (arr[index] < minValue) {
	minValue = arr[index]; 
	minIndex = index; 
	for (int i = 0; i < size; i++) {
	  std::cout << arr[i] << " "; 
	}
	std::cout << std::endl; 
      }
    }
    arr[minIndex] = arr[startScan]; 
    arr[startScan] = minValue; 
  }
  displayArr(arr, size); 
}

void displayArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " "; 
  }
  std::cout << std::endl; 
}
