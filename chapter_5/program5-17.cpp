#include <iostream>
#include <fstream>

int main() {
  // declare output file stream 
  std::ofstream outputFile; 
  int number1, number2, number3; 

  // open an output file 
  outputFile.open("Numbers.txt"); 

  // get three numbers from the user. 
  std::cout << "Enter a number: "; 
  std::cin >> number1; 
  std::cout << "Enter another number: "; 
  std::cin >> number2; 
  std::cout << "One more time. Enter a number: "; 
  std::cin >> number3; 

  // write the numbers to the file. 
  outputFile << number1 << std::endl; 
  outputFile << number2 << std::endl; 
  outputFile << number3 << std::endl; 

  // close the file
  outputFile.close(); 
  std::cout << "Done\n"; 
  return 0; 
}
