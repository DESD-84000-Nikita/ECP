//Write a program to accept a number and print its prime factors.

#include<stdio.h>
int main()
{
  int num,k=2,j;
  
  printf("Enter the number\n");
  scanf("%d",&num);
  while(k<num)
  {
   if(num%k==0)
   {
     num=num/k;
     printf("%4d",k);
       if(num%k==0)
       printf("%4d",k);
   }
   k++;
  }
  
  return 0;
}
