//program to count frequency of occurance of character
#include<stdio.h>
void freqcount(char *s)
{
    int f[256]={0},i;
    for(i=0;s[i];i++)
    f[s[i]]++;

    for(i=0;s[i];i++)
    {
        if(f[s[i]])
        {
            printf("%c %d\n",s[i],f[s[i]]);
            f[s[i]]=0;
        }
    }
}
void main()
{
    char a[100];
    gets(a);
    freqcount(a);
}
