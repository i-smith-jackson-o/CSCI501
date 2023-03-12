// two identical arrays of at least 20 integers. 
// call bubblesort to sort one array in ascending order. 
// call selectionsort to sort the other. 
// keep a count of the number of exchanges it makes. 
// display those values on the screen. 

#include <iostream>
#include <array>
#include <random>

// Function prototypes
int bubbleSort(int[], int); 
int selectionSort(int[], int); 
void randGen(int[], int); 
void copyArr(int[], int[], int); 
void displayArr(int[], int); 

int main() {
  int bubbleExch, 
      selectionExch, 
      size = 20; 

  int arrOne[size]; 
  int arrTwo[size]; 

  randGen(arrOne, size); 
  copyArr(arrOne, arrTwo, size); 
  displayArr(arrOne, size); 
  displayArr(arrTwo, size); 

  bubbleExch = bubbleSort(arrOne, size); 
  selectionExch = selectionSort(arrTwo, size); 

  std::cout << bubbleExch << " exchanges to bubbleSort randomly ";  
  std::cout << "generated array of " << size << " values.\n"; 

  std::cout << selectionExch << " exchanges to selectionSort randomly ";  
  std::cout << "generated array of " << size << " values.\n"; 

  return 0; 
}


int bubbleSort(int arr[], int size) {
  int temp, 
      exch = 0; 
  bool swap; 

  do {
    swap = false; 
    for (int i = 0; i < (size - 1); i++) {
      if (arr[i] > arr[i+1]) {
	temp = arr[i]; 
	arr[i] = arr[i + 1]; 
	arr[i + 1] = temp; 
	swap = true; 
	exch++; 
      }
    }
  } while (swap); 
  return exch; 
}

int selectionSort(int arr[], int size) {
  int exch = 0, 
      startScan, 
      minIndex, 
      minValue; 

  for (startScan = 0; startScan < (size - 1); startScan++) {
    minIndex = startScan; 
    minValue = arr[startScan]; 
    for (int index = startScan + 1; index < size; index++) {
      if (arr[index] < minValue) {
	minValue = arr[index]; 
	minIndex = index; 
	exch++;
      }
    }
    arr[minIndex] = arr[startScan]; 
    arr[startScan] = minValue; 
  }
  return exch; 
}


void randGen(int arr[], int size) {
  std::mt19937 mt{ std::random_device{}() }; 
  std::uniform_int_distribution<> n {0, 999}; 

  for (int i = 0; i < size; i++) {
    int temp = n(mt); 
    arr[i] = temp; 
  }
}

void copyArr(int arrOne[], int arrTwo[], int size) {
  for (int i = 0; i < size; i++) {
    arrTwo[i] = arrOne[i]; 
  }
}

void displayArr(int arr[], int size) {
  int n = 10; 

  std::cout << "Displaying first " << n << " and last ";
  std::cout << n << " values of array: \n"; 
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " "; 
  }
  std::cout << std::endl; 
  for (int i = size - n; i < size; i++) {
    std::cout << arr[i] << " "; 
  }
  std::cout << std::endl; 
}
