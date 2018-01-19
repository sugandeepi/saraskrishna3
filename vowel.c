#include<stdio.h>
main()_
{
char c;
printf("enter the character to check whether it is vowel or constant\n");
scanf("%c",&c)
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("the %c is a vowel",c);
}
else
{
printf("the %c is a constant",c);
}
printf("\n");
}
