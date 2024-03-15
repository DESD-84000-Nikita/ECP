//program to check wheather the entered character is in uppercase,lowercase,digit and other character
#include<stdio.h> 
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    printf(" UPPERCASE\n");

    else if(ch>='a' && ch<='z')
    printf(" lowercase\n");

    else if(ch>='0' && ch<='9')
   printf(" digit\n");
   else
   printf("Enter valid input");
return 0;
}
