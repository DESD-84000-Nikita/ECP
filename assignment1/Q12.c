/*12. Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E.*/

#include<stdio.h>
#include<float.h>

int main()
{

	printf("Data Types                size        Format Specifier      Range \n") ;

	printf(".....\n");
    printf("float                      %ld           %%f                %lf to %lf\n", sizeof(float),	FLT_MIN,FLT_MAX);
	
	printf("double                     %ld           %%lf                %lf to %lf\n", sizeof(double),DBL_MIN,DBL_MAX);
	
	printf("long double                %ld           %%Lf                %Lf to %Lf\n", sizeof(long double),LDBL_MIN,LDBL_MAX);



return 0;
}

