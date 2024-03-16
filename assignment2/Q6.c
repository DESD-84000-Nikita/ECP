/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).

*/


#include<stdio.h>
int main()
{
	int num,rem=0,sum=0,rev=0;
     
	printf("Enter the number:");
	scanf("%d",&num);

	int temp=num;
	while(num!=0)
	{
			rem = num%10;
			rev=rev*10+rem;
			num=num/10;
	}
	
	if(temp==rev)
	{
			printf("Palidrome\n");
	}
	else
	{ 
			printf("not palidrome\n");
	}
    
	printf("reversed number=%d", rev);



  

return 0;
}
