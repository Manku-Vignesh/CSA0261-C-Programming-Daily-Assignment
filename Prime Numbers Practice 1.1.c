// C program to find prime numbers in a given range

#include <stdio.h>
int main()
{
int a, b, i, flag;
printf(“\nEnter start value : “);
scanf(“%d”,&a);
printf(“\nEnter end value : “);
scanf(“%d”,&b);
printf(“\nPrime Numbers between %d and %d : “, a, b);
while (a < b)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
printf(“%d “, a);
++a;
}
printf(“\n”);
return 0;
}
