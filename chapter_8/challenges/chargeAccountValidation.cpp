// Write a program that lets the user enter a charge account 
// number. The program should determine if the number is valid by 
// checking for it in the following list. 
// 5658845  4520125 7895122 8777541 8451277 1302850
// 8080152  4562555 5552012 5050552 7825877 1250255
// 1005231  6545231 3852085 7576651 7881200 4581002
// The list of numbers should be initialized in a single-dimensional array. 
// A linear search should be used to locate the number entered by the user. 
// If the user enteres a number that is in the array, the program should 
// display a message saying that the number is valid. If the user enters 
// a number that is not in the array, the program should display a message
// indicating that the number is invalid. 

#include <iostream>
#include <array>

// Function Prototype
int getAcctNum(); 
void findAccount(int[], int, int); 

int main() {
  int acctNums[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
		     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
		     1005231, 6545231, 3852085, 7576651, 7881200, 4581002 }; 
  int acct; 
  int size = sizeof(acctNums)/sizeof(acctNums[0]); 
  
  acct = getAcctNum(); 
  findAccount(acctNums, acct, size); 
  return 0; 
}

int getAcctNum() {
  int acctNum; 

  std::cout << "Enter acctNum is the format - nnnnnnn: "; 
  std::cin >> acctNum; 

  return acctNum; 
} 

void findAccount(int arr[], int acct, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == acct) {
      std::cout << "Account number valid." << std::endl; 
      return; 
    }
  }
  std::cout << "Account not found." << std::endl;  
}
