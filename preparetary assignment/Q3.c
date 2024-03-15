//calculate fibonic series
#include<stdio.h>

int main(void)
{
    int i,n;
    int a=0;
    int b=1;
    int c=a+b;
    printf("enter the number:");
    scanf("%d",&n);
    printf("fibonacci series is:%d %d ",a,b);
    for(i=0;i<n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }

}
