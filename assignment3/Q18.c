//Write a program to print the tables of the numbers from 1 to 10.
#include<stdio.h>

int main()
{
  int row, col;
  
  printf("Table of 1 to 10 is as\n");
  for(row=1;row<=10;row++)
  {
    for(col=1;col<=10;col++)
    {
      printf("%4d",row*col);
    }
    printf("\n");
  }

  return 0;
}
