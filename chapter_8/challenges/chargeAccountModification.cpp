#include <iostream>
#include <array>

// Function Prototypes
void selectionSort(int[], int); 
int binarySearch(int[], int, int); 
int getAcctNum(); 


int main() {
  int acctNums[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
		     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
		     1005231, 6545231, 3852085, 7576651, 7881200, 4581002 }; 
  int acct; 
  int size = sizeof(acctNums)/sizeof(acctNums[0]); 

  selectionSort(acctNums, size); 
  acct = getAcctNum(); 

  if (binarySearch(acctNums, acct, size) >= 0) {
    std::cout << "Account found!" << std::endl;
  } else {
    std::cout << "No Dice!" << std::endl; 
  }
  return 0; 
}

void selectionSort(int arr[], int size) {
  for (int startScan = 0; startScan < size; startScan++) {
    int index = startScan, 
	minIndex = startScan, 
	minValue = arr[startScan]; 
    for (index = startScan + 1; index < size; index++) {
      if (arr[index] < minValue) {
	minValue = arr[index]; 
	minIndex = index; 
      }
    }
    arr[minIndex] = arr[startScan]; 
    arr[startScan] = minValue; 
  }
}

int binarySearch(int arr[], int value, int size) {
  int first = 0, 
      last = size, 
      middle, 
      position = -1; 
  bool found = false; 

  while (!found && first <= last) {
    middle = (first + last) / 2; 
    if (arr[middle] == value) {
      found = true; 
      position = middle; 
    } else if (arr[middle] > value) 
      last = middle - 1; 
    else 
      first = middle + 1; 
  }
  return position; 
}

int getAcctNum() {
  int acct; 

  std::cout << "Enter account number in the format nnnnnnn: "; 
  std::cin >> acct; 

  return acct; 
}
