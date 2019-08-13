#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,p=0;
printf("\n enter the  number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
p++;
}
}
if(p==2)
{
printf("\n yes");
}
else
{
printf("\n no");
}
getch();
}
