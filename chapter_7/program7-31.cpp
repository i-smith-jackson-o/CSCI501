// This program demonstrates the vectors empty member function. 
#include <iostream>
#include <vector>
using namespace std; 

// function prototype 
double avgVector(vector<int>); 

int main() {
  vector<int> values; 
  int numValues; 
  double average; 

  // Get the number of values to average. 
  cout << "How many values do you wish to average?"; 
  cin >> numValues; 

  // Get the values and store them in the vector. 
  for (int count = 0; count < numValues; count++) {
    int tempValue; 
    cout << "Enter a value: "; 
    cin >> tempValue; 
    values.push_back(tempValue); 
  }

  // Get the average of the values and display it. 
  average = avgVector(values); 
  cout << "Average: " << average << endl; 
  return 0; 
}

double avgVector(vector<int> vect) {
  int total = 0; 
  double avg; 

  if (vect.empty()) {
    cout << "No values to average.\n"; 
    avg = 0.0; 
  } else {
    for (int count = 0; count < vect.size(); count++)
      total += vect[count]; 
    avg = total / vect.size(); 
  }
  return avg; 
}
