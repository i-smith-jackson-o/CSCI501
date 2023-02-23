#include <iostream>
#include <vector>
#include <random>
#include <chrono>

int main() {
  int empA = 0, 
      empB = 0, 
      empC = 0, 
      empD = 0, 
      empE = 0, 
      empF = 0, 
      empG = 0, 
      empH = 0; 

  std::mt19937 mt{ std::random_device{}() }; 
  std::vector<int> empId {20, 67, 36, 42, 69, 35, 18, 85}; 
  std::uniform_int_distribution<> die7{0,7}; 

  for (int i = 0; i <= 100; ++i) {
    int temp = empId[die7(mt)]; 
    std::cout << temp << std::endl; 

    switch(temp) {
      case 20: 
	empA++; 
	break; 
      case 67: 
	empB++; 
	break; 
      case 36: 
	empC++; 
	break; 
      case 42: 
	empD++; 
	break; 
      case 69: 
	empE++; 
	break; 
      case 35: 
	empF++; 
	break; 
      case 18: 
	empG++; 
	break; 
      case 85: 
	empH++; 
	break; 
      default: 
	std::cout << "Default" << std::endl; 
	break; 
    }
  }
  std::cout << "EmpA "<< 20 << " " << empA << "\n"; 
  std::cout << "EmpB "<< 67 << " " << empB << "\n"; 
  std::cout << "EmpC "<< 36 << " " << empC << "\n"; 
  std::cout << "EmpD "<< 42 << " " << empD << "\n"; 
  std::cout << "EmpE "<< 69 << " " << empE << "\n"; 
  std::cout << "EmpF "<< 35 << " " << empF << "\n"; 
  std::cout << "EmpG "<< 18 << " " << empG << "\n"; 
  std::cout << "EmpH "<< 85 << " " << empH << "\n"; 
  return 0; 
}
