#include <stdio.h>
#include <string.h>

  int main () {
    int foo[5], n;
    n=0;

    memset((char *)0x0, 1, 100);

    printf (" Initial value of n is %d \n", n);
    return 0;
  }
