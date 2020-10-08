#include <iostream>

int main(int argc, char const *argv[]) {
  const int **ppt;
  const int *pt;
  int a=35;
  pt=&a;
  **ppt=9;
  // ppt=&pt;
  // *ppt=&a;
  // *pt=23;
  return 0;
}
