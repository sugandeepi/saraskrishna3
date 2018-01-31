#include<stdio.h>
int main()
{
int n,fact=1,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of given number is %d",fact);
return 0;
}
