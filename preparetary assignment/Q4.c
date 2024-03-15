//program to calculate grade of a student
#include<stdio.h>
int main()
{
    int marks,total_marks=0;
    printf("enter the marks of 5 subjects: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks);
        
        if(marks>20)
        {
            return;
        }
        total_marks+=marks;
    }
    printf("%d ",total_marks);

    if(total_marks>=90)
    printf("Grade:EX");

    else if(total_marks<90 && total_marks>=80)
    printf("Grade:A");

    else if(total_marks<80 && total_marks>=70)
    printf("Grade:B");

    else if(total_marks<70 && total_marks>=60)
    printf("Grade:C");

    else
    printf("Grade:F");

}
