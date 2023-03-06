#include <iostream>

// Function prototypes
int getMin(int[]); 
int getMax(int[]); 

int main() {
  int arr1[10]; 
  int arr2[10]; 

  for (int i = 0; i < 10; i++) {
    std::cout << "# " << i << ": "; 
    std::cin >> arr1[i]; 
    std::cin >> arr2[i]; 
  }

  std::cout << getMin(arr1) << std::endl; 
  std::cout << getMax(arr1) << std::endl; 

  std::cout << getMin(arr2) << std::endl; 
  std::cout << getMax(arr2) << std::endl; 
  return 0; 
}

int getMin(int arr[]) {
  int min = arr[0]; 

  for (int i = 0; i < 10; i++) {
    if (arr[i] < min)
      min = arr[i]; 
  }
  return min; 
}

int getMax(int arr[]) {
  int max = arr[0]; 

  for (int i = 0; i < 10; i++) {
    if (arr[i] > max)
      max = arr[i]; 
  }
  return max; 
}
