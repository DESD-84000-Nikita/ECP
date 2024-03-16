/*Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on x plane and y plane*/ 

#include<stdio.h>
 int main()
 {

		int x ,y;

		printf("Enter the values for co-ordinate\n");
		scanf("%d%d",&x,&y);

		if(x>0&&y>0)
		{
			printf("Point is lies on first quadrrant\n");
		}
		else if(x<0&&y>0)
		{
			printf("Point is lies on second quadrant\n");
		}
		else if(x<0&&y<0)
		{
			printf("Point is lies on third quadrant\n");
		}
		else if(x>0&&y<0)
		{
			printf("Point lies on fourth quadrant\n");
		}
		else if(x==0&&y==0)
		{
			printf("point lies on origin\n");
		}
		else
		{
			printf("Invalid !\n");
		}


return 0;
 }
