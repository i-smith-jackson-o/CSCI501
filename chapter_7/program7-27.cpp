// This program stores, int two arrays, the hours worked by 5 
// employees, and their hourly pay rates. 
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std; 
 
int main() {
  vector<int> hours; 
  vector<double> payRate; 
  int numEmployees; 
  int index; 

  // Get the number of employees. 
  cout << "How many employees do you have? "; 
  cin >> numEmployees; 

  // Input the payroll data
  cout << "Enter the hours worked by " << numEmployees; 
  cout << " employees and their hourly rates.\n"; 
  for (index = 0; index < numEmployees; index++) {
    int tempHours; 
    double tempRate; 
    cout << "Hours worked by employee #" << (index + 1); 
    cout << ": "; 
    cin >> tempHours; 
    hours.push_back(tempHours); 
    cout << "Hourly pay rate for employee #";    
    cout << (index + 1) << ": "; 
    cin >> tempRate; 
    payRate.push_back(tempRate); 
  }

  // Display each employees gross pay. 
  cout << "Here is the gross pay for each employee:\n"; 
  cout << fixed << showpoint << setprecision(2); 
  for (index = 0; index < numEmployees; index++) {
    double grossPay = hours[index] * payRate[index]; 
    cout << "Employee #" << (index + 1); 
    cout << ": " << grossPay << endl; 
  }
  return 0; 
}
