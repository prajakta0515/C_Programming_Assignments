
//Program to find out biggest of three numbers

#include <stdio.h>


int main()
{
	int a, b, c;

	printf("Enter three numbers: ");
	scanf("%d %d %d" ,&a, &b,&c);

	if (a>b && a>c){ 
		printf("a is biggest number\n");
	}else{
			if (b>a && b>c){
				printf("b is biggest number\n");
			}else
				printf("c is biggest number\n");
	}
	return 0;
}	

