// This program reads data from a file into an array
#include <iostream>
#include <fstream>

int main() {
  const int ARRAY_SIZE = 10; 
  int numbers[ARRAY_SIZE]; 
  int count = 0; 
  std::ifstream inputFile; 

  inputFile.open("TenNumbers.txt"); 

  while(count < ARRAY_SIZE && inputFile >> numbers[count])
    count++; 

  inputFile.close(); 

  std::cout << "The numbers are: "; 
  for (count = 0; count < ARRAY_SIZE; count++)
    std::cout << numbers[count] << " "; 
  std::cout <<  std::endl; 
  return 0; 
}
