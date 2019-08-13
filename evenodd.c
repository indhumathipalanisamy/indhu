#include<stdio.h>
#include<conio.h>
void main()
{
int number;
printf("\n enter the number");
scanf("%d",&number);
if(number>0)
{
if(number%2==0)
printf("%d is even",number);
else
printf("%d is odd",number);
}
  else
    printf("/n invalid");
getch();
}
