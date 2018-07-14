#include <iostream>
using namespace std;
#define MAX(i,j) (((i)>(j))?i:j)



int main() {
int a,b;
a = 100;
b = 200;

cout << "Maximum of the two numbers is :"<<MAX(a,b) << endl;

return 0;
}
