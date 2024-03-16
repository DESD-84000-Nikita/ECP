/*Write a program to accept a character c and display category of the input character.

ALPHABET: c is a letter (65 to 90 or 97 to 122)
UPPERCASE: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT: c is a digit (48 to 57)
SPACE: c is a space(32), tab(9), carriage return(13), new line(10)*/

#include<stdio.h>
int main()
{
    char ch;

	printf("Enter character:\n");
	scanf("%c",&ch);

	if((ch>=65)&&(ch<=90) )
	{
			printf("character is uppercase\n");

	}
	else if((ch>=97)&&(ch<=122))
	{
		 printf("character is lowercase\n");

	}
	else if((ch>=48)&&(ch<=57))
	{
			printf("it is a Digit\n");

	}
	 else if(ch==32)
	{
		printf("space\n");
	}
	else if(ch==9)
	{
		printf("tab\n");
	}
	 else if(ch==13)
	{
		printf("carriage return\n");
	}
	 else if(ch==10)
	{
		printf("new line\n");
	}
	else
		printf("Invalid character Input\n ");
return 0;
}



