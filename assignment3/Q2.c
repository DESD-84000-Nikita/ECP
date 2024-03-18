//Write a program to print table of given number using while loop.


#include<stdio.h>
int main()
{
int num,num1;
int i=1;

		printf("Enter the number:\n");
	    scanf("%d",&num);
		
while(i<=10)
{
	printf("%d*%d= %d\n",num,i,(num*i));
	i++;
}
return 0;
}
