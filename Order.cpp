#include <cstdio>

int main(int argc, char *argv[]){

  for (int i = 0; i < argc; i++) {
    std::printf("arg %i: %s\n", i, argv[i]);
  }

  return 0;
}


