#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("\n enter the letter");
scanf("%d",c);
islowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isuppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
if(islowercasevowel||isuppercasevowel)
printf("%c is a vowel",c);
else
printf(("consontant");
}
else
printf("\n invalid");
getch();
}
