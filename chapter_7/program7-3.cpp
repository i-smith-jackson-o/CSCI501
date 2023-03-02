// This program reads data from a file into an array
#include <iostream>
#include <fstream>
using namespace std; 

int main() {
  const int ARRAY_SIZE = 10; 
  int numbers[ARRAY_SIZE]; 
  int count = 0; 
  ifstream inputFile; 

  // Open the file
  inputFile.open("TenNumbers.txt"); 

  // Read the numbers from the file into the array. 
  while(count < ARRAY_SIZE && inputFile >> numbers[count])
    count++; 

  // Close the file. 
  inputFile.close(); 

  // Display the numbers read. 
  cout << "The numbers are: "; 
  for (count = 0; count < ARRAY_SIZE; count++)
    cout << numbers[count] << " "; 
  cout <<  std::endl; 
  return 0; 
}
