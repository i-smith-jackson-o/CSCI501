// Randomly generate 1000 integers between 1 - 10000
#include <iostream>
#include <random>
#include <fstream>
#include <vector>
#include <string>

void randGen(std::vector<int>& arr, int min, int max, int nValues) {
  std::mt19937 mt{ std::random_device{}() }; 
  std::uniform_int_distribution<> tenK {min,max}; 

  for (int i = 0; i < nValues; i++) {
    int temp = tenK(mt); 
    arr.push_back(temp); 
  }
}

void writeFile(std::vector<int>& vec, std::string fileName) {
  std::ofstream outputFile; 
  outputFile.open(fileName); 
  for (int i = 0; i < vec.size(); i++)  {
    outputFile << vec[i] << std::endl; 
  }
  outputFile.close(); 
}

int main() {
  int min, 
      max, 
      nValues; 
  std::string fileName; 
  std::vector<int> arr {}; 

  std::cout << "Enter the number of values to generate: "; 
  std::cin >> nValues; 
  std::cout << "Enter the filename you'd like to use: "; 
  std::cin >> fileName; 
  std::cout << "Enter the minimum value: "; 
  std::cin >> min; 
  std::cout << "Enter the max value: "; 
  std::cin >> max; 

  randGen(arr, min, max, nValues);
  writeFile(arr, fileName); 

  std::cout << "Done" << std::endl; 
  return 0; 
}
