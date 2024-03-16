/*Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.*/

#include<stdio.h>

int main()
{
		int year, month;

		printf("Enter the year:\n");
		scanf("%d",&year);

		printf("Enter the month:\n");
		scanf("%d",&month);

		if((month==2)&&(year%400==0)||(year%100!=0)&&(year%4==0))
		{
			
			printf("number of days 29:\n");
			printf("it is leap year\n it has 366 days\n ");


		}

		else if(month==2)
		{
				printf("number of days 28\n");
				printf("it is a not leap year\n it has 365 day\ns");
		}

		else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
		{
			printf("This month had 31 days %d\n",month);
		}
		else 
		{
			printf("this month had  30 days%d\n",month);
		}
	
		


return 0;
}

