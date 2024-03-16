/* Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
*/

#include<stdio.h>
int main()
{
 int num1, num2;
  
printf("Enter the Number :\n");
  scanf("%d%d",&num1,&num2);

  int  ADD = num1 + num2;
  printf("Addition :%d \n",ADD);

 int  SUB = num1 - num2;
  printf("Subtraction :%d \n",SUB);

int  PRODUCT = num1 * num2;
  printf("Product :%d \n",PRODUCT);

  return 0;
  }


  
  
  
