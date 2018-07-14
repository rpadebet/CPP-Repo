//////////////////////////////////////////////////////////////////////////////
//              This is a demo of function with variable args              //
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdarg>

using namespace std;

// this function will take a variable number of arguments and compute average
// first argument specifies number of numbers to average

double average ( int num, ...) {
  va_list arguments;  //holds the arguments passed
  double sum = 0;

  va_start(arguments, num);    // initializes the list of arguments

  for (int x = 0; x < num; x++)
    {
      sum = sum + va_arg(arguments , double);
      // va_arg takes the list of arguments and gives the next item in the list in the type specified "double" above
      }
  va_end(arguments); // cleans up the list
  return sum/num;
}

int main()
{
  cout <<"Average of 3.14,6.3345,7.23 is:"<<average(3,3.14,6.3345,7.23)  << "\n";
  cout<< average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) <<endl;
  return 0;
}


  
  
