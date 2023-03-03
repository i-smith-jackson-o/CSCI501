// This program demonstrates a two-dimensional array
#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
  const int NUM_DIVS = 3; 
  const int NUM_QTRS = 4; 
  double sales[NUM_DIVS][NUM_QTRS]; 
  double totalSales = 0; 
  int div, qtr; 

  cout << "This program will calculate the total sales of \n"; 
  cout << "all the companys divisions.\n"; 
  cout << "Enter the following sales information:\n\n"; 

  // Nested loops to fill the array with quarterly 
  // sales figures for each division 
  for (div = 0; div < NUM_DIVS; div++) {
    for (qtr = 0; qtr < NUM_QTRS; qtr++) {
      cout << "Division " << (div + 1); 
      cout << ", Quarter " << (qtr + 1) << ": $"; 
      cin >> sales[div][qtr]; 
    }
    cout << endl; 
  }

  // Nested loops to add all the elments. 
  for (div = 0; div < NUM_DIVS; div++) {
    for (qtr = 0; qtr < NUM_QTRS; qtr++) 
      totalSales += sales[div][qtr]; 
    }

    cout << fixed << showpoint << setprecision(2); 
    cout << "The total sales for the company are: $"; 
    cout << totalSales << endl; 
    return 0; 
}
