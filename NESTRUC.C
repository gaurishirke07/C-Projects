#include<stdio.h>

struct authors
{
char name[30];
char email[30];
};

struct book
{
char title [30];
char pub[30];
int pgno;
struct authors a;
};

void main()
{
struct book b;
clrscr();
printf("Enter Title: ");
gets(b.title);
printf("Enter Publication: ");
gets(b.pub);
printf("Enter No. of Pages: ");
scanf("%d",&b.pgno);
printf("Enter Name of Author: ");
getchar();
gets(b.a.name);
printf("Enter Email: ");
gets(b.a.email);
printf("Book Record:\n");
printf("Title: %s\n",b.title);
printf("Pub: %s\n",b.pub);
printf("No. of Pages: %d\n",b.pgno);
printf("Author Name: %s\n",b.a.name);
printf("Email: %s",b.a.email);
getch();
}