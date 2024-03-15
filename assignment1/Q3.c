/* Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value
*/

#include<stdio.h>
int main()
{
  char ch;

   printf("Enter the character: \n ");
   scanf("%c",&ch);

   printf("ASCII value of decimal:%d\n",ch);

   printf("ASCII value of octal:%o\n",ch);

   printf("ASCII value of hex:%x\n",ch);

   printf("character value:%c\n",ch);

   return 0;

  }
   


