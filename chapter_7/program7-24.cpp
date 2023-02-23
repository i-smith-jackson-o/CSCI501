// This program stores, in two vectors, the hours worked by 5 
// employeess, and their hourly pay rates
#include <ios>
#include <iostream>
#include <iomanip>
#include <vector>

int main() {
  const int NUM_EMPLOYEES = 5; 
  std::vector<int> hours(NUM_EMPLOYEES); 
  std::vector<double> payRate(NUM_EMPLOYEES); 
  int idx; 

  std::cout << "Enter the hours worked by " << NUM_EMPLOYEES; 
  std::cout << " employees and their hourly rates.\n"; 

  for (idx = 0; idx < NUM_EMPLOYEES; idx++) {
    std::cout << "Hours worked by employee #" << (idx + 1); 
    std::cout << ": "; 
    std::cin >> hours[idx]; 
    std::cout << "Hourly payrate for employee #"; 
    std::cout << (idx + 1) << ": "; 
    std::cin >> payRate[idx]; 
  }

  std::cout << "\nHere is the gross pay for each employee:\n"; 
  std::cout << std::fixed << std::showpoint << std::setprecision(2); 

  for (idx = 0; idx < NUM_EMPLOYEES; idx++) {
    double grossPay = hours[idx] * payRate[idx]; 
    std::cout << "Employee #" << (idx + 1); 
    std::cout << ": $" << grossPay << std::endl; 
  }

  return 0; 
}
