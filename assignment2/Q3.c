// Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>

int main()
{
	int num1;

	printf("Enter the number :\n");
	scanf("%d",&num1);

	if(num1>0)
	printf("number is positive \n");

	else if(num1<0)
	printf("number is negative \n");

	else
	printf("number is zero\n");

return 0;
}
