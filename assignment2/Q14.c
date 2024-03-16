/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables

*/

#include<stdio.h>
int main()
{
		int empid,deptNo;
		char dc;
		
		printf("Enter the Employee ID :");
		scanf("%d",&empid);
		
		printf("Enter Dept No         :");
		scanf("%d",&deptNo);

		printf("Enter Desig. code     :");
		getchar();
		dc=getchar();

		switch(deptNo)
		{
			case 10:
					printf("Employee with ID :%d Is Working In a Marketing Department",empid);
					break;
			case 20:
					printf("Employee with ID :%d Is Woring in a Manegement Department",empid);
					break;
			case 30:
					printf("Employee with ID :%d Is Working in a Sales Department",empid);
					break;
			case 40:
					printf("Employee with ID :%d Is Working in a Designing Department",empid);
					break;
					
		}
		switch(dc)
          {
			case 'M': 
				printf("as Manager\n ");
				break;

			case 'S':
			 		printf("as Supervisor\n");
					break;
			case's':
					printf("as Security Officer \n");
					break;
			case'C':
					printf("as cleark\n");
					break;
		}
return 0;
}
