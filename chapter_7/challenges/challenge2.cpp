// Rainfall Statistics 
// Write a program that lets the user enter the total rainfall for each of 12 
// months into an array of doubles. The program should calculate and display 
// the total rainfall for the year, the average monthly rainfall, and the 
// months with the highest and lowest amounts. 
// Input Validation: Do not accept negative numbers for monthly rainfall figures. 
#include <iostream>

void getRainfall(double[], int); 
double calcTotal(double[], int); 
double calcAverage(double, int); 
double getMin(double[], int); 
double getMax(double[], int); 

int main() {
  int size = 12; 
  double total, 
	 average, 
	 min, 
	 max; 
  double rainFall[size]; 

  getRainfall(rainFall, size); 

  total = calcTotal(rainFall, size); 
  average = calcAverage(total, size); 
  min = getMin(rainFall, size); 
  max = getMax(rainFall, size); 

  std::cout << "Total: " << total << std::endl; 
  std::cout << "Average: " << average << std::endl; 
  std::cout << "Min: " << min << std::endl; 
  std::cout << "Max: " << max << std::endl; 

  return 0; 
}

void getRainfall(double arr[], int size) {
  std::cout << "Enter rainfall for month"; 
  double temp; 
  for (int i = 0; i < size; i++) {
    std::cout << "Month #" << (i  + 1) << ": "; 
    std::cin >> temp; 
    if (temp < 0)
      std::cout << "Cannot have negative rainfall..."; 
    else 
      arr[i] = temp; 
  }
}

double calcTotal(double arr[], int size) {
  double total; 

  for (int i = 0; i < size; i++)
    total += arr[i]; 

  return total; 
}

double calcAverage(double total, int size) {
  return total / size; 
}

double getMin(double arr[], int size) {
  double min = arr[0]; 

  for (int i = 0; i < size; i++) {
    if (arr[i] < min)
      min = arr[i]; 
  }
  return min; 
}

double getMax(double arr[], int size) {
  double max = arr[0]; 

  for (int i = 0; i < size; i++) {
    if (arr[i] > max)
      max = arr[i]; 
  }
  return max; 
}
