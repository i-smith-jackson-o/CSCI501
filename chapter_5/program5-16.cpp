// This program writes data to a singe line in a file. 
#include <iostream>
#include <fstream>
using namespace std; 

int main() {
  ofstream outputFile; 
  outputFile.open("demofile.txt"); 

  cout << "Now writing data to the file.\n"; 

  // Write four names to the file. 
  outputFile << "Bach"; 
  outputFile << "Beethoven"; 
  outputFile << "Mozart"; 
  outputFile << "Schubert"; 
  
  outputFile.close(); 
  cout << "Done.\n"; 
  return 0; 
}
