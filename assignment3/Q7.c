/* Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number*/
#include<stdio.h>
int main()
{
 int n,k=1,j;
 printf("Enter the number\n");
 scanf("%d",&n);
 while(k<n)
 {
 if(n%k==0)
 {
 if(k<n/k)
 printf("%d * %d = %d\n",k,n/k,n);
 }
   k++;
 }

  
  return 0;
}

