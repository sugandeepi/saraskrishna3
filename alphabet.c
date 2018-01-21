#include<stdio.h>
int main()
{
char c;
printf("enter any alphabet\n");
scanf("%c",&c);
if((c>=65&&c<=90)||(c>=97&&c<=122))
{
printf("entered character is alphabet\n",c);
}
else
{
printf("entered character is not alphabet\n",c);
}
return 0;
}
