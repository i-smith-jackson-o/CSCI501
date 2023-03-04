// This program stores, in two vectors, the hours worked by 5 
// employeess, and their hourly pay rates
#include <ios>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std; 

int main() {
  const int NUM_EMPLOYEES = 5; 
  vector<int> hours(NUM_EMPLOYEES); 
  vector<double> payRate(NUM_EMPLOYEES); 
  int idx; 

  // input the data. 
  cout << "Enter the hours worked by " << NUM_EMPLOYEES; 
  cout << " employees and their hourly rates.\n"; 
  for (idx = 0; idx < NUM_EMPLOYEES; idx++) {
    cout << "Hours worked by employee #" << (idx + 1); 
    cout << ": "; 
    cin >> hours[idx]; 
    cout << "Hourly payrate for employee #"; 
    cout << (idx + 1) << ": "; 
    cin >> payRate[idx]; 
  }

  // Display each employees gross pay. 
  cout << "\nHere is the gross pay for each employee:\n"; 
  cout << fixed << showpoint << setprecision(2); 

  for (idx = 0; idx < NUM_EMPLOYEES; idx++) {
    double grossPay = hours[idx] * payRate[idx]; 
    cout << "Employee #" << (idx + 1); 
    cout << ": $" << grossPay << endl; 
  }
  return 0; 
}
