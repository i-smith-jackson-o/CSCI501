// This program uses a type cast to avoid integer division 
#include <iostream>
using namespace std; 

int main() {
  int books; 
  int months; 
  double perMonth; 

  cout << "n books "; 
  cin >> books; 
  cout << "n months "; 
  cin >> months; 

  perMonth = static_cast<double>(books) / months; 
  cout << " " << perMonth << " \n"; 

  return 0; 
}
