#include <iostream>
using namespace std;

int main() {
  char temp;
  for (int i = 0; i <128; ++i) {
    temp = i;
    cout << i<<" : "<<temp<<endl;
  }

  return 0;
}
