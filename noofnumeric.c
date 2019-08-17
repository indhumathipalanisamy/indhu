#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char str[500];
int  i,digit;
digit = i=0;
printf("\n\nCount total number of digits:");
printf("Input the string : ");
fgets(str, sizeof str, stdin);
while(str[i]!='\0')
{
if(str[i]>='0' && str[i]<='9')
{
digit++;
}
i++;
 }
printf("Number of Digits in the string is : %d\n", digit);
getch();
}
