#include <stdio.h>
int main() {
   int t;
   printf(" Temp is:");
   scanf("%d", &t);
   printf(" Temp is %d C", t);
   float f;
   f = (t * 1.8) + 32;
   printf(" Temp is %f F", f);
   return 0;
}