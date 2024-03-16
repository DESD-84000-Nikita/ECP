/*Write a program to accept a number and print the number in character, decimal, octal and hex
formats.
*/
#include<stdio.h>
int main()
{
   int num1;

   printf("Enter the Number:\n ");
   scanf("%d",&num1);

   printf("character :%c\n ",num1);

   printf("decimal:%d\n",num1);

   printf("octal:%o\n",num1);

   printf("hexadecimal:%x\n",num1);

   return 0;
}   


