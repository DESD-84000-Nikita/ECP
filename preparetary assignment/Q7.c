//print the table of given number using command line arguments
#include<stdio.h>

int main(int argc,char *argv[])
{
    int i;
    printf("count=%d\n",argc);
    printf("table:\n");
    int n=atoi(argv[1]);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
