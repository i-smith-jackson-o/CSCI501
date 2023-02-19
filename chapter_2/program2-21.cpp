// This program calculates hourly wages including overtime
#include <iostream>
using namespace std; 

int main() {
  double regularWages, 
	 basePayRate = 18.25, 
	 regularHours = 40, 
	 overtimeWages, 
	 overtimePayRate = 27.78, 
	 overtimeHours = 10, 
	 totalWages; 

  //Calculate regular wages
  regularWages = basePayRate * regularHours; 
  //Calculate overtime wages 
  overtimeWages = overtimePayRate * overtimeHours; 

  //Calculate total wages
  totalWages = regularWages + overtimeWages; 

  //Display total wages
  cout <<"Wages for this week are: $" << totalWages << endl; 

  return 0; 
}
