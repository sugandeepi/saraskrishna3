#include<stdio.h>
int main()
{
int base,exp;
long long power=1
printf("enter the base");
scanf("%d",&base);
printf("enter the exp);
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
power=power*base;
}
printf("%d ^ %d=11%d",base,power,exp);
return 0;
}
