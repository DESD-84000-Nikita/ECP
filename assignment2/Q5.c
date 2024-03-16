/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.

*/

#include<stdio.h>
int main()
{
	int n1,n2, n3 ,max;

	printf("Enter the num1:\n");
	scanf("%d",&n1);

	printf("Enter the num2:\n");
	scanf("%d",&n2);

	printf("Enter the num3:\n");
	scanf("%d",&n3);
/*
	if(n1>n2)
	{
		 if(n1>n3)
		 {

					printf("num1 is greater! %d",n1);
		 }

		else
		{
					printf("num3 is greater! %d",n3);
		}

	}	

	else
	{
		if(n2>n3)
		printf("num2 is greater!%d",n2);

		else
		printf("num3 is greater! %d",n3);
	}
*/


	max=(n1>n2)?((n2>n3)?n1:n3):((n2>n3)?n2:n3);

	printf("Max =%d \n",max);






return 0;
}
