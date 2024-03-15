/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator

*/

#include<stdio.h>
int main()
{
	int  year;
	printf("Enter a year :");
	scanf("%d",&year);

//using logical operator

/*	if(((year%4==0)&&(year%400==0)) ||(year%100!=0))
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is a not leap year", year);
	}
*/

//without using logical operator

/*	if(year%400==0)
	{
		printf("%d year is leap",year);
	}
	else if(year%100==0)
	{
		printf("%d  is not leap year",year);
	}
	else if(year%4==0)
	{
			printf("%d  is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
*/
(year % 4 == 0 && year % 100 != 0)?printf("Leap year\n")  : (year % 400 == 0)?printf("Leap year\n") : printf("Non-Leap year\n");




return 0;
}
