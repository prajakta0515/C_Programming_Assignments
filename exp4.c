// Program to find out given character is vowel or not


#include <stdio.h>
 
void  main()
{
	
	char ch;
	printf ("enter a character: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("Given character is vowel\n");
	}
	else{
		printf("Given character is not vowel\n");
	}

}	
