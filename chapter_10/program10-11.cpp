// This propgram demonstrates how the getline function can 
// be used for all of a programs input. 
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std; 

int main() {
  const int INPUT_SIZE = 81; 
  const int NAME_SIZE = 30; 
  char input[INPUT_SIZE]; 
  char name[NAME_SIZE]; 
  int idNumber; 
  int age; 
  double income; 

  // Get the users ID number
  cout << "What is your ID number? "; 
  cin.getline(input, INPUT_SIZE); 
  idNumber = atoi(input); 

  // Get the users name. No conversion necessary. 
  cout << "What is your name? "; 
  cin.getline(name, NAME_SIZE); 

  // Get the users age. 
  cout << "How old are you? "; 
  cin.getline(input, INPUT_SIZE); 
  age = atoi(input); 

  // Get the user's income. 
  cout << "What is your annual income? "; 
  cin.getline(input, INPUT_SIZE); 
  income = atof(input); 

  // Show the resulting data. 
  cout << setprecision(2) << fixed << showpoint; 
  cout << "Your name is " << name
       << ", you are " << age 
       << " years od, \nand you make $"
       << income << " per year.\n"; 

  return 0; 
}
