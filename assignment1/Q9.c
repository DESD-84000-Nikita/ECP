//Write a program to convert temperature in Celsius to Fahrenheit and vice versa.

#include<stdio.h>
int main()
{
 
float  fahrenheit;

 
	printf("Enter fahrenheit:\n");
	scanf("%f",&fahrenheit);

   float celsius=(fahrenheit-32)*5/9;
	
	printf(" celsius= %f\n",celsius);


return 0;

}
