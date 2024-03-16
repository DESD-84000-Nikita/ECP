/*Write a program to display number of days in the given month and year using switch case
statement.

*/


#include<stdio.h>

int main()
{
	int year,month,days;

	printf("Enter the year:\n");
	scanf("%d",&year);

	printf("Enter the month:\n");
	scanf("%d",&month);
	 
	 switch(month)
	 {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
				printf("number of days 31\n");
				break;

		case 4:
		case 6:
		case 9:
		case 11:
				printf("number of days 30\n");;
				break;
		case 2:
				
				printf("number of days 28/29\n");
				break;
		default:
				days=0;
				break;
	 }


return 0;
}
