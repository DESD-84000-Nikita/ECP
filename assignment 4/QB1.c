//Write a function to calculate factorial of a given number using recursion.
#include<stdio.h>

 int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, multiplyNumbers(n));
    return 0;
}

 int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
