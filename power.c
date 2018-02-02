#include<stdio.h>
int main()
{
int base,exp,i;
long long power=1
printf("enter the base");
scanf("%d",&base);
printf("enter the exp");
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
power=power*base;
}
printf("%d ^ %d=%d",base,exp,power);
return 0;
}
