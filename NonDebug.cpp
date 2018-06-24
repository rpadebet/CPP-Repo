#include <stdio.h>
#include <cstring>

using namespace std;

int main () {
    int n=100;
    int foo[] = {1,2,3,4,5};
    for (int i = 0; i < (sizeof foo)/4; ++i) {
      printf("foo[%i] = %i \n", i,foo[i]);
    }

    std::memset(foo,n , sizeof foo);
    std::memcmp(

    
    for (int i = 0; i < (sizeof foo)/4; ++i) {
      printf("foo[%i] = %i \n", i,foo[i]);
    }
    
    printf (" Initial value of n is %i \n", n);
    return 0;
  }
