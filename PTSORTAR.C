#include<stdio.h>

void sort (int *p, int n);

void main()
{
int i,n;
int a[100];
int *p = a;
clrscr();
printf("Enter Number of Elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter Element: ");
	scanf("%d",p+i);
}
sort(p,n);
printf("Sorted Array: ");
for(i=0;i<n;i++)
{
	printf("%d ",*(p+i));
}
getch();
}

void sort (int *p, int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(*(p+j)>*(p+j+1))
		{
			temp = *(p+j);
			*(p+j) = *(p+j+1);
			*(p+j+1) = temp;
		}
	}
}
}