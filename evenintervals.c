#include<stdio.h>
#include<conio.h>
void main()
{
int f1,f2,rem,i;
printf("\n enter the intervals");
scanf("%d %d",&f1,&f2);
for(i=f1;i<=f2;++i)
{
rem=i%2;
if(rem==0)
printf("\n %d",i);
}
getch();
)
