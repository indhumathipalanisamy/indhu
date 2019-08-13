#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int base,exponent,result;
printf("\n enter an base number:");
scanf("%d",&base);
printf("\n enter an exponent number:");
scanf("%d",&exponent);
result=pow(base,exponent);
printf("%d^%d=%d",base,exponent,result);
getch();
}
