// This program demonstrates a unique_ptr pointing 
// to a dynamically allocated array of integers. 
#include <iostream>
#include <memory>

int main() {
  int max; 

  std::cout << "How many numbers do you want to enter? "; 
  std::cin >> max; 

  std::unique_ptr<int[]> ptr( new int[max]); 

  for (int i = 0; i < max; i++) {
    std::cout << "Enter an integer: "; 
    std::cin >> ptr[i]; 
  }

  std::cout << "Here are the values you entered:\n"; 
  for (int i = 0; i < max; i++)
    std::cout <<  ptr[i] << std::endl; 

  return 0; 
}
