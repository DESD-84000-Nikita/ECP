/*Write a program to accept two numbers an display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.

*/
#include<stdio.h>

int main()
{
	int num1, num2;
	float division;
	  
	printf("Enter the value of num1 :\n");
	scanf("%d",&num1);

	printf("Enter the value of num2 :\n");
	scanf("%d",&num2);

	if(num2==0)
	printf("divided by zero is invalid:\n");

	else
	{
	division=num1/num2;
	printf("division =%f\n ", division);
	}
	return 0;
	






}
