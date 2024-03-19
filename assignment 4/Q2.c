/* 2. Write a function to calculate power.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    
    long int base, exp;
    printf (" Enter the base value:\n ");
	scanf("%d",&base);
    printf (" Enter the power value:\n ");
    scanf (" %d", &exp); 

   
    printf (" %d to the power %d is = %d ", base, exp, pow_num (base, exp));
}

// definition of the function
int pow_num (int x, int y)
{
    int power = 1, i; 
    for (i = 1; i <= y; ++i)
    {
        power = power * x;

    }
    return power;
}
