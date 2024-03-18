// Write a program to accept a number and check whether it is Prime no.

#include<stdio.h>

int main()
{
  int num, i,flag=1;

  printf("Enter the number:\n");
  scanf("%d",&num);

  for(i=2;i<=num/2;i++)
  {
		if(num%i==0)
		{

		flag=0;
		break;
		}
  }
  if(flag==1&&num>1)
  {
	printf("%d is prime number",num);
 }
 else
 	printf("%d is not a prime number",num);


return 0;
}
