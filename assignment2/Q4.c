/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.*/

#include<stdio.h>
int main()
{
	int num1,num2 ;
	int max;




	printf("Enter the number1:\n");
	scanf("%d",&num1);

	printf("Enter the number2:\n");
	scanf("%d",&num2);
/*
	if(num1>num2)
	printf("num1 is maximum!");

	else
	printf("num2 is muximum");
*/

	max=(num1>num2)?num1:num2;

	printf("The Number is maximum between %d and %d is %d\n",num1,num2,max);





return 0;

}
