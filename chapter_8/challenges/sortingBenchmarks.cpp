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
  int size = 20; 
  int arrOne[size]; 
  int arrTwo[size]; 

  randGen(arrOne, size); 
  copyArr(arrOne, arrTwo, size); 
  displayArr(arrOne, size); 
  displayArr(arrTwo, size); 

  bubbleSort(arrOne, size); 
  selectionSort(arrTwo, size); 

  return 0; 
}


int bubbleSort(int arr[], int size) {
  int exch = 0; 

  return exch; 
}

int selectionSort(int arr[], int size) {
  int exch = 0; 

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
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " "; 
  }
  std::cout << std::endl; 
}







