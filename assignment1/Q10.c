/* Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
*/

#include<stdio.h>
#include<math.h>

int main()
{
   int perimeter,a,b,c;
   float s, Area;

   printf("Enter the length of three sides:\n");
   scanf("%d%d%d",&a,&b,&c);

   perimeter=a+b+c;
	printf("perimeter :%d\n",perimeter);

	s=(a+b+c)/2;
	printf("s : %f\n",s);

	  Area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area :%f ",Area);

	return 0;
}	





