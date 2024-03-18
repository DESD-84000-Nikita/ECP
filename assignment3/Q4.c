//Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
	int i=1;
	int factorial=1;
	int num;

	printf("Enter a number:\n");
	scanf("%d",&num);

	while(i<=num)
	{
		factorial*=i;
		
		printf("%d*",i);
		i++;
	}
	printf("\nnum:%d=%d\n",num,factorial);


return 0;
}
