// Chips and Salsa 
// Write a program that lets a maker of chips and salsa keep track 
// of sales for five different types of salsa: mild, medium, sweet, 
// hot, and zesty. the program should use two parallel 5-element arrays: 
// an array of strings that holds the five salsa names and 
// an array of integers that holds the number of jars sold during the past 
// month for each salsa type. The names should be store using an initialization 
// list at the time the name array is created. The program should prompt the user
// to enter the number of jars sold for each time. Once this sales data 
// has been entered, the program should produce a report that displays 
// sales for each salsa type, total sales, and the names of the highest 
// selling and lowest selling products. 
// Input Validation: Do not accept negative values for number 
// of jars sold. 
#include <iostream>
#include <string>
#include <iomanip>
using std::string; 

// Function prototypes 
void getSales(string[], int[], int); 
int getMin(int[], int); 
int getMax(int[], int); 
int calcTotal(int arr[], int); 
void displayReport(int, int, int, string[], int[]); 

int main() {
  int SIZE = 5; 
  int sales[SIZE]; 
  string salsas[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"}; 

  int min, 
      max, 
      total; 

  getSales(salsas,sales,SIZE); 
  min = getMin(sales, SIZE); 
  max = getMax(sales, SIZE); 
  total = calcTotal(sales, SIZE); 

  displayReport(min, max, total, salsas, sales); 

  return 0; 
}


void getSales(string salsas[], int sales[], int size) {
  int temp; 

  for (int i = 0; i < size; i++) {
    std::cout << "Enter N jars sold for " << salsas[i] << ": "; 
    std::cin >> temp; 
    if (temp > 0) 
      sales[i] = temp; 
    else
     std::cout << "Negative number of sales...\n";
  }
}

int getMin(int sales[], int size) {
  int minIndex = 0; 
  for (int i = 0; i < size; i++) {
    if (sales[i] < sales[minIndex])
      minIndex = i; 
  }
  return minIndex; 
} 

int getMax(int sales[], int size) {
  int maxIndex = 0; 
  for (int i = 0; i < size; i++) {
    if (sales[i] > sales[maxIndex])
      maxIndex = i; 
  }
  return maxIndex; 
}

int calcTotal(int sales[], int size) {
  int total = 0; 
  for (int i = 0; i < size; i++)
    total += sales[i]; 

  return total; 
}

void displayReport(int min, int max, int total, string salsas[], int sales[]) {
  std::cout << "Max: " << salsas[max] << " with " << sales[max] << " jars sold.\n"; 
  std::cout << "Min: " << salsas[min] << " with " << sales[min] << " jars sold.\n"; 
  std::cout << "Total jars sold: " << total << "." << std::endl; 
}
