//Write a program to accept a character and a number, and print the character number times
 #include<stdio.h>

 int main()
 {
		char ch;
		int time,i;

		printf("Enter a character\n");
		scanf("%c",&ch);

		printf("Enter a number\n");
		scanf("%d",&time);

		while(i<time)
		{
			printf("%s",&ch);
			i++;
		}



 return 0;
 }
