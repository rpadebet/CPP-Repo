#include <stdio.h>
#include <cstring>

using namespace std;

int main () {
    int n;
    int foo[] = {1,2,3,4,5};
    for (int i = 0; i < sizeof(foo); ++i) {
      printf("foo[i] = %i/n", foo[i]);
    }

    std::memset((char *)0x0, 1, 100);
    
    printf (" Initial value of n is %d \n", n);
    return 0;
  }
