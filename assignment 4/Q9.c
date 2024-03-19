/* Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range. */
#include <stdio.h> 
  

void checkPrime(int N) 
{ 
     
    int flag = 1; 
  
    
    for (int i = 2; i <= N / 2; i++) { 
  
        
        if (N % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag) { 
        printf("The number %d is a Prime Number\n", N); 
    } 
    else { 
        printf("The number %d is not a Prime Number\n", N); 
    } 
  
    return; 
} 
  
 
int main() 
{ 
    int N ; 
    printf("Enter a number:");
    scanf("%d",&N);
    checkPrime(N); 
  
    return 0;
}	
