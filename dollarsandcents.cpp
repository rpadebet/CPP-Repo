#include <iostream>
using namespace std;
int main()
{
  int dollar, cents;
  double price;
  char dollarSign = 36; //impilicit conversion
  cout<<"enter price in dollars and cents: "<<endl;
  cin >> price;
  dollar = static_cast<int>(price);
  cout << "dollar = "<<dollar << "\n";
  cents = price*100-dollar*100;
  cout<<"total dollar: "<<dollarSign<<dollar<<endl<<"cents: "<<cents<<endl;
  return 0;
}
