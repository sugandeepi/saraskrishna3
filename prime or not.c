#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<n/2;i++);
{
if(n%!==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is prime number");
else
printf("%d is not prime number");
return 0;
}
