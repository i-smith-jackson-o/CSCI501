// Randomly generate 1000 integers between 1 - 10000
#include <iostream>
#include <random>
#include <fstream>
#include <vector>

int main() {
  std::mt19937 mt{ std::random_device{}() }; 
  std::uniform_int_distribution<> tenK {0,10000}; 
  std::ofstream outputFile; 
  std::vector<int> numbers {}; 

  for (int i = 0; i < 1000; i++) {
    int temp = tenK(mt); 
    numbers.push_back(temp); 
  }

  outputFile.open("1kIntegers.txt");

  for (int i = 0; i < numbers.size(); i++) 
    outputFile << numbers[i] << std::endl; 

  outputFile.close(); 
  std::cout << "Done" << std::endl; 
  return 0; 
}
