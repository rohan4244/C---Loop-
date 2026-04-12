#include <stdio.h>
int main () {
  int num = 0;
  int i;
  for (i=0;i<10;i++) {
    printf("%d\n",i);
  } printf("Loop 1 is Finished\n");

  int sum=0;
   for (i=0;i<10;i++) {
sum=sum + i; // Add current value of i to sum
 //printf("%d\n",i);
    } printf("Total Sum is = %d\n", sum);
    printf("Loop 2 is Finished\n");
    
   int minus=0;
    for (i=0;i<10;i++) {
minus=minus - i; // Subtract current value of i from minus
 
//printf("%d\n",i);
    } printf("Total Minus is = %d\n", minus);
    printf("Loop 3 is Finished\n");
    return 0;
  }
