// This program demonstrates a simple class. 
#include <iostream>
using namespace std; 
 
// Rectangle class declaration. 
class Rectangle {
  private: 
    double width; 
    double length; 
  public: 
    void setWidth(double); 
    void setLength(double); 
    double getWidth() const; 
    double getLength() const; 
    double getArea() const; 
}; 

void Rectangle::setWidth(double w) {
  width = w;
}

void Rectangle::setLength(double len) {
  length = len; 
}

double Rectangle::getWidth() const {
  return width; 
}

double Rectangle::getLength() const {
  return length; 
}

double Rectangle::getArea() const {
  return width * length; 
}

int main() {
  Rectangle box; 
  double rectWidth; 
  double rectLength; 

  // Get the rectangle's width and length from the user. 
  cout << "What is the width? "; 
  cin >> rectWidth; 
  cout << "What is the length? "; 
  cin >> rectLength; 

  //
  //
  box.setWidth(rectWidth); 
  box.setLength(rectLength); 

  // Display 
  cout << "Width: " << box.getWidth() << endl; 
  cout << "Length: " << box.getLength() << endl; 
  cout << "Area: " << box.getArea() << endl; 
  
  return 0; 
}
