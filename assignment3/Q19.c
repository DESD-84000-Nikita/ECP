/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range*/

#include<stdio.h>

int main(void)

{

	int i=0;
	int j=0;
	int res=0;
	for(i=1;i<=10;i++)
	{

		for(j=3;j<=6;j++)
		{

			res=i*j;
			printf("%d\t",res);





		}

		printf("\n");



	}
	printf("\t");



	return 0;
}
