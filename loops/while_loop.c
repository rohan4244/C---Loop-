#include <stdio.h>
int main () {
  int num1=1;
  while (num1 <= 10) {
    printf ("%d\n",num1);
    num1++; // num1 = num1 + 1
  }
  printf("finish\n");
  int num2=24;
  while (num2 > 0) {
    printf("%d\n",num2);
    num2--; // num2 = num2 - 1
  }
  printf("loop 2 finished");
  return 0;
}
