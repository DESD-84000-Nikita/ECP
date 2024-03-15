//Write a program to accept three integer numbers and find its average.

#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;

	printf("Enter the  numbers:\n");

	printf("enter the first num:\n");
	scanf("%d",&a);

	printf("enter the second num:\n");
	scanf("%d",&b);

	printf("Enter the third num:\n");
	scanf("%d",&c);	

		avg=a+b+c/3.0;
		printf("Average :%f\n",avg);

	return 0;


}
