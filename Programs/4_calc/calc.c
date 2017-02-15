#include <stdio.h>

int main(int argc, char const *argv[]) {
  int binNum = 0b1010;
  int decNum = 10;
  int hexNum = 0xa;
  int octNum = 05;
  
  int res = binNum + decNum + hexNum + octNum;
  
  printf("%d\n", res);
  
  return 0;
}
