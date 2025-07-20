#include<stdio.h>

void main()
{
char s[100];
char *p = s;
int i;
int vow=0,cons=0;
clrscr();
printf("Enter String: ");
gets(p);
for(i=0;*(p+i)!=0;i++)
{
	if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
	{vow++;}
	else
	{cons++;}
}
printf("Vowels: %d\nConsonants: %d",vow,cons);
getch();
}