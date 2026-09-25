// write a c program to find out sum and average of n numbers.


#include <stdio.h>

int main()
{

   int n;
   float sum, Average;
   printf("Enter how many number: ");
   scanf ("%d", &n);
   sum = n*(n+1)/2;      //sum of n consecutive numbers
   Average = sum /n;
   printf("Sum and Average of numbers is %f and %f\n", sum, Average);

return 0;
}
