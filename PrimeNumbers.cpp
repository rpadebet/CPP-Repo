#include <iostream>
using namespace std;

//Function prototype
int checkPrimeNumber(int);

// Main function
int main()
{
  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;
  
  if(checkPrimeNumber(n) == 0)
    cout << n << " is a prime number.\n";
  else
    cout << n << " is not a prime number.\n";
  return 0;
}

//User Defined function to find out prime numbers
int checkPrimeNumber(int n)
{
  bool flag = false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}
