#include<iostream>
using namespace std;
 
int fun(int &x)
{
  int z = x;
  return z;
}

int main()
{
  int y = fun(10);
    cout << y;
    return 0;
}
