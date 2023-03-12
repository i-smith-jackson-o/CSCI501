// Modify to display list of months, sorted in order of rainfall, from 
// highest to lowest. 
#include <iostream>
#include <string>
#include <array>
#include <iomanip>
using std::string; 

// Function prototypes
void getRainfall(double[], string[], int); 
double calcTotal(double[], int); 
double calcAverage(double, int); 
int getMin(double[], int); 
int getMax(double[], int); 
void displayData(int, int, double, double, double[], string[]); 
void sortData(string[], double[], int); 

int main() {
  int min, 
      max, 
      size = 12; 
  string months[] = { "January", "February", "March", "April", 
		      "May", "June", "July", "August", "September", 
		      "October", "November", "December" }; 
  double rainFall[size]; 
  double average, 
	 total; 

  getRainfall(rainFall, months, size); 
  total = calcTotal(rainFall, size); 
  average = calcAverage(total, size); 
  min = getMin(rainFall, size); 
  max = getMax(rainFall, size); 
  displayData(min, max, average, total, rainFall, months); 
  sortData(months, rainFall, size); 

  return 0; 
}

void getRainfall(double rain[], string months[], int size) {
  double temp; 
  for (int i = 0; i < size; i++) {
    std::cout << "Enter rainFall for " << months[i] << ": "; 
    std::cin >> temp; 
    if (temp < 0)
      std::cout << "Error"; 
    else
     rain[i] = temp;
  }
}

double calcTotal(double arr[], int size) {
  double total = 0; 
  for (int i = 0; i < size; i++)
    total += arr[i]; 
  return total; 
}

double calcAverage(double total, int size) {
  return total / size; 
}

int getMin(double arr[], int size) {
  int min = 0; 
  // Get index of minimum value
  for (int i = 0; i < size; i++) {
    if (arr[i] < arr[min]) {
      min = i; 
    }
  }
  return min; 
}

int getMax(double arr[], int size) {
  int max = 0; 
  // Get index of maximum value
  for (int i = 0; i < size; i++) {
    if (arr[i] > arr[max]) {
      max = i; 
    }
  }
  return max; 
}

void displayData(int min, int max, double avg, double total, double rain[], string months[]) {
  std::cout << std::fixed << std::showpoint << std::setprecision(2); 
  std::cout << "Minimum Rainfall: " << months[min] << " " << rain[min] << "in." << std::endl; 
  std::cout << "Maximum Rainfall: " << months[max] << " " << rain[max] << "in." << std::endl; 
  std::cout << "Average Rainfall: " << avg << "in." << std::endl; 
  std::cout << "Total Rainfall: " << total << "in." << std::endl; 
}

void sortData(string months[], double rain[], int size) {

  int i, j;  
  double k; 
  string n; 
  for (int i = 1; i < size; i++) {
    k = rain[i]; 
    n = months[i]; 
    j = i - 1; 
    // move elements
    while (j >= 0 && rain[j] > k) {
      rain[j + 1] = rain[j]; 
      months[j + 1] = months[j]; 
      j = j - 1; 
    }
    rain[j + 1] = k; 
    months[j + 1] = n;
  }

  std::cout << "Rainfall by month in descending order: " << std::endl; 
  for (int i = size - 1; i >= 0; i--) {
    std::cout << std::fixed << std::showpoint << std::setprecision(2); 
    std::cout << months[i] << " " << rain[i] << std::endl; 
  }
  std::cout << std::endl; 
}

