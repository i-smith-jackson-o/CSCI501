// This program produces a sales report for DLC, Inc. 
#include <iostream>
#include <iomanip>

// Function prototypes 
void calcSales(const int [], const double [], double [], int); 
void showOrder(const double [], const int [], int); 
void dualSort(int [], double [], int); 
void showTotals(const double [], const int[], int); 

const int NUM_PRODS = 9; 

int main() {
  // Product ID numbers
  int id[NUM_PRODS] = { 914, 915, 916, 917, 918, 919, 920, 
			921, 922 }; 
  // number of units sold for each product
  int units[NUM_PRODS] = { 842, 416, 127, 514, 437, 269, 97, 
			   492, 212 }; 
  // array of product prices
  double prices[NUM_PRODS] = { 12.95, 14.95, 18.95, 16.95, 21.95, 
			       31.95, 14.95, 14.95, 16.95 }; 
  // computed sales amounts
  double sales[NUM_PRODS]; 

  calcSales(units, prices, sales, NUM_PRODS); 

  dualSort(id, sales, NUM_PRODS); 
  std::cout << std::setprecision(2) << std::fixed << std::showpoint; 

  showOrder(sales, id, NUM_PRODS); 

  showTotals(sales, units, NUM_PRODS); 
  return 0; 
}

void calcSales(const int units[], const double prices[], double sales[], int num) {
  for (int index = 0; index < num; index++)
    sales[index] = units[index] * prices[index]; 
}

void dualSort(int id[], double sales[], int size) {
  int startScan, maxIndex, tempid; 
  double maxValue; 

  for (startScan = 0; startScan < (size - 1); startScan++) {
    maxIndex = startScan; 
    maxValue = sales[startScan]; 
    tempid = id[startScan]; 
    for (int index = startScan + 1; index < size; index++) {
      if (sales[index] > maxValue) {
	maxValue = sales[index]; 
	tempid = id[index]; 
	maxIndex = index; 
      }
    }
    sales[maxIndex] = sales[startScan]; 
    id[maxIndex] = id[startScan]; 
    sales[startScan] = maxValue; 
    id[startScan] = tempid; 
  }
}

void showOrder(const double sales[], const int id[], int num) {
  std::cout << "Product Number\t  Sales\n"; 
  std::cout << "---------------------------\n"; 
  for (int index = 0; index < num; index++) {
    std::cout << id[index] << "\t\t$"; 
    std::cout << std::setw(8) << sales[index] << std::endl; 
  }
  std::cout << std::endl; 
}

void showTotals(const double sales[], const int units[], int num) {
  int totalUnits = 0; 
  double totalSales = 0.0; 
  for (int index = 0; index < num; index++) {
    totalUnits += units[index]; 
    totalSales += sales[index]; 
  }
  std::cout << "Total Units Sold:  " << totalUnits << std::endl; 
  std::cout << "Total Sales:    $" << totalSales << std::endl; 
}











