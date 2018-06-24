///////////////////////////////////////////////////////////////////////////////
//                   Trying References compared to pointers                  //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int pow2(int &x);

int main()
{
  int x = 2;
  std::cout <<"x = "<< x << "\n";
  int y = pow2(x);
  std::cout <<"y = pow2(x) = "<<y << "\n";
  std::cout << "x after pow2 = "<<x<<endl;
  return 0;
}


int pow2(int& x){
// & operator passes an alias to x

  /////////////////////////////////////////////////////////////////////////////////
  // the below code doesn't modify x here, so x after pow2() in main will remain //
  // unchanged when return x*x; is used                                          //
  // However when x is assigned a value like x =x*x then original x in main      //
  // also gets modified                                                          //
  /////////////////////////////////////////////////////////////////////////////////

// avoid the risk of x getting changed by using "const" key work in function
// parameter like int pow2(const int& x) - it would then result in compiler
// error if x gets modified within this function
  
  return x = x * x;
}
