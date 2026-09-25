#include <stdio.h>

int main()
{
	int n,m,number,u,t,h;
	printf ("enter the number: ");
	scanf("%d",&n);
	printf("The entered no. is %d\n",n);
	u= n % 10;//no is % by 10 so comes unit digit
	m= n/10;//no is divided by 10 so comes divided no
	t= m%10;//now m% 10 comes tens digit
	h= m/10;//m/10 comes hundred digit.
	number = u*100+t*10+h;
	printf("Number with digits in reverse order becomes %d\n",number);
	return 0; 
}
