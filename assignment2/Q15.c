//Write a program to display day of week from given date (day, month and year).
#include<stdio.h>

int main()
{
	int day,month,year;
	int day_of_week;

	printf("Enter the date in formate DD/MM/YY: ");
	scanf("%d/%d/%d",&day,&month,&year);

	if(month<3)
	{
	 month+=12;  //month=2,2+12=14
	 year--;
	 }

	 day_of_week=(day+(13*(month+1)/5)+(year%100)+((year%100)/4)+((year/100)/4)+(2*(year/100)))%7;

	 switch(day_of_week)
	 {

	 	case 0:
				printf("The week day is Saturday\n");
				break;

		case 1:
				printf("The week day is Sunday\n");
				break;

		case 2:		
				printf("The week day is Monday\n");
				break;
		
		case 3:
				printf("The week day is Tuesday\n");
				break;

		case 4:
				printf("The week day is Wednesday\n");
				break;
			
		case 5:
				printf("The week day is Thursday\n");
				break;
      	case 6:
				printf("The week day is Friday\n");
				break;

		
		   
				

	}
return 0;
}
