#include<stdio.h>
#include<conio.h>
void main()
{
int num,m,n;
clrscr();
printf("\n enter the intervals");
scanf("%d %d",&m,&n);
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
getch();
}
