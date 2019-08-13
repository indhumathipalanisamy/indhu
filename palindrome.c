#include<stdio.h>
#include<conio.h>
void main()
{
int n,reversedinteger=0,remainder,originalinteger;
printf("\n enter an integer:");
scanf("%d",&n);
originalinteger=n;
while(n!=0)
{
remainder=n%10;
reversedinteger=reverseinteger*10+remainder;
n/=10;
}
if(originalinteger==reversedinteger)
printf("\n yes");
else
printf("\n no");
getch();
}
