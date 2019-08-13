#include<stdio.h>
#include<conio.h>
void main()
{
int c,n,fact=1;
printf("\n enter the number");
scanf("%d",&n);
for(c=1;c<=n;c++)
fact=fact*c;
printf(fact);
getch();
}
