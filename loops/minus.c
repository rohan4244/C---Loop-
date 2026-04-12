#include <stdio.h>
int main () {
  int i,minus=0;
  for (i=0;i<10;i++) {
minus=minus - i; // Add current value of i to sum
 }
printf("%d\n",minus);
  return 0;
}
