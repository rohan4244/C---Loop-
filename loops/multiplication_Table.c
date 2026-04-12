#include <stdio.h>
int main () {
  int num;

  printf("Welcome to Multiplication Table.");
  printf("\n \nEnter A Random Number to check Multiplication:");
  scanf("%d", &num);
  for(int i=1;i<=10;i++) {
    printf("\n%d X %d = %d\n", num,i, num*i);
  }
  return 0;
}
