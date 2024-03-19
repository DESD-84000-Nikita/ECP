/* 10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month. */

#include<stdio.h>
void printNumberOfDays(int N) 
{ 
  
    if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12)
	{ 
        printf("31 Days."); 
    }
    else if (N == 4 || N == 6 || N == 9 || N == 11)
	{ 
        printf("30 Days."); 
    } 
  
    else if (N == 2) 
	{ 
        printf("28/29 Days."); 
    } 
    else
	{ 
        printf("Invalid Month."); 
    } 
} 
int isLeapYear(int year)
{
    if (year % 4 == 0)
    {
      if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }

            else
            {
                return 0;
            }
        }
        else
        {
		return 1;
		}
    }
    else
	{
       return 0;
    }
}

int main()
{
	int N ;
	printf("Enter month:");
	scanf("%d",&N);
	printNumberOfDays(N); 

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
    {
       printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
