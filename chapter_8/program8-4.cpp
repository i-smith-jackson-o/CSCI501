#include <iostream>

void sortArray(int[], int); 
void showArray(const int[], int); 

int main() {
  int values[6] = {7, 2, 3, 8, 9, 1}; 

  std::cout << "The unsorted values are: \n"; 
  showArray(values, 6); 

  sortArray(values, 6); 

  std::cout << "the sorted values are:\n"; 
  showArray(values, 6); 
  return 0; 
}

void sortArray(int array[], int size) {
  bool swap; 
  int temp; 

  do {
    swap = false; 
    for (int count = 0; count < (size - 1); count++){
      if (array[count] > array[count + 1]) {
	temp = array[count]; 
	array[count] = array[count + 1]; 
	array[count + 1] = temp; 
	swap = true; 
      }
    }
  } while (swap); 
}

void showArray(const int array[], int size) {
  for (int count = 0; count < size; count++)
    std::cout << array[count] << " "; 
  std::cout << std::endl; 
}
