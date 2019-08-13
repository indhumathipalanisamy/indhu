#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int base,exponent,result;
printf("\n enter an base and exponent number:");
scanf("%d",&base);
scanf("%d",&exponent);
result=pow(base,exponent);
printf("%d^%d=%d",base,exponent,result);
getch();
}
