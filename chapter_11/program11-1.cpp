// this program demonstrates the use of structures. 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct PayRoll {
  int empNumber; 
  string name; 
  double hours; 
  double payRate; 
  double grossPay; 
}; 

int main() {
  PayRoll employee; 

  // Get the employee's number
  cout << "Enter the employee's number: "; 
  cin >> employee.empNumber; 
   
  // Get the employee's name. 
  cout << "Enter the employees name: "; 
  cin.ignore(); // to skip the remaining '\n'
  getline(cin, employee.name); 

  // Get the hours worked by the employee. 
  cout << "How many hours did the employee work? "; 
  cin >> employee.hours; 

  // Get the employees hourly pay rate. 
  cout << "What is the employee's hourly pay rate? "; 
  cin >> employee.payRate; 

  // Calculate the employees gross pay. 
  employee.grossPay = employee.hours * employee.payRate; 

  // Display the employee data: 
  cout << "Name: " << employee.name << endl; 
  cout << "Number: " << employee.empNumber << endl; 
  cout << "Hours worked: " << employee.hours << endl; 
  cout << "Hourly payRate: " << employee.payRate << endl; 
  cout << fixed << showpoint << setprecision(2); 
  cout << "Gross Pay: $" << employee.grossPay << endl; 
  return 0; 
}
