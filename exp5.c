//Program to find out given year is leap year or not

#include <stdio.h>

int main( ) {

	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if(year%4 == 0){
		printf("Given year is leap year\n");
	}
	else{
		printf("year is not leap year\n");
	}
	return 0;
}
