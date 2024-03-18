//Write a program to accept a number and print all factors excluding the number

#include<stdio.h>
int main()
{
	int i=1, fact=1,num;

	printf("Enter a number\n");
	scanf("%d",&num);
	
	printf("factors of %d :",num);
	while(i<=num)
	{
			if(num%i==0)
			{
			printf("%d\n",i);
			}
			i++;
}		

	
return 0;
}
