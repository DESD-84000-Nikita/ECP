/*Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639


*/

#include <stdio.h>
int main(void)
{

   int num=9361,a,b,c,d;
   int result =num;

   d=num%10; //d=1
   num=num/10;//num=936

   c=num%10;//c=6
   num =num/10;//num=93

   b=num%10; //b=3
   num=num/10;//num=9
   
   a=num;
   printf("%d %d %d %d\n",a,b,c,d);
   printf("%d=%d+%d+%d+%d\n",result,a*1000,b*100,c*10,d);
   printf("%d%d%d%d\n",d,c,b,a);

   }

