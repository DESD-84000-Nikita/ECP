/*Write a program to accept integer values of base and index and calculate power of base to
index*/

#include <stdio.h>

int main()
{
    int base, index;
    int power = 1;
    int i;

    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index: ");
    scanf("%d", &index);
   
    for(i=index;i>0;i--)
    {
        power = power * base;
    }
    printf("%d ^ %d = %d", base, index, power);

    return 0;
}
