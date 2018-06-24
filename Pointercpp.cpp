#include <iostream>
using namespace std;

int main() {
  double* p = NULL ; //Pointer initialized with Null
  p = new double ; //Request memory for variable
  *p = 2.465567; // Store value at allocated address

  cout << "Value Stored in P is : "<< *p << "\n";
  cout << "Address of P (&p) is : "<< &p << "\n";
  cout << "Address of P (p) is : "<< p << "\n";
  cout << "Address of moved pointer ++p is : "<< ++p << "\n";
  cout << "New Address of P (p) after ++p is : "<< p << "\n";
  cout << "Address of moved pointer p++ is : "<< p++ << "\n";
  cout << "New Address of P (p) after p++ is : "<< p << "\n";
  cout << "Value at moved pointer p is : "<< *p << "\n";

  p--;
  p--;

  cout << "Value at point p after two pointer decrements is : "<<*p << endl;
  delete p; // free memory

  return 0;
} 
