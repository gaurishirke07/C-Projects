#include<stdio.h>

void main()
{
int r,c,i,j;
int a[100][100],b[100][100];
int *p = &a[0][0];
int *q = &b[0][0];
clrscr();
printf("Enter No. of Rows: ");
scanf("%d",&r);
printf("Enter No. of Columns: ");
scanf("%d",&c);
printf("\nMatrix A:\n");
for(i=0;i<r;i++)
{
	printf("Enter Row %d Elements:\n",i+1);
	for(j=0;j<c;j++)
	{
		printf("Enter Element: ");
		scanf("%d",(*(a+i)+j));
	}
}
printf("\nMatrix B:\n");
for(i=0;i<r;i++)
{
	printf("Enter Row %d Elements:\n",i+1);
	for(j=0;j<c;j++)
	{
		printf("Enter Element: ");
		scanf("%d",(*(b+i)+j));
	}
}
printf("\nAdded Mx:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	printf("%d ",(*(*(a+i)+j) + *(*(b+i)+j)));
	}
	printf("\n");
}
getch();
}
