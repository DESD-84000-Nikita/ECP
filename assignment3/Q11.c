//Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of%d=%d\n",num,fact);

return 0;
}
