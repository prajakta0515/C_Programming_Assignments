#include <stdio.h>

int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d",&a);
scanf("%d",&b);
printf("\nThe two entered numbers are a = %d and b = %d\n",a,b);
a= a^b;
b=b^a;
a= a^b;
printf("Numbers after swapping are a = %d and b = %d\n",a,b);
return 0;
}
