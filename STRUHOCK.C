#include<stdio.h>

struct hock
{
char name[30];
int matches;
int goals;
};

void main()
{
int i,j,n;
int temp;
int arrg[30];
struct hock h[30];
clrscr();
printf("Enter Number of Players: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Player %d:\n",i+1);
	printf("Enter Name: ");
	getchar();
	gets(h[i].name);
	printf("Enter No. of Matches: ");
	scanf("%d",&h[i].matches);
	printf("Enter No. of Goals: ");
	scanf("%d",&h[i].goals);
	printf("\n");
}
for(i=0;i<n;i++)
{
	arrg[i] = h[i].goals;
}
for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(arrg[j]<arrg[j+1])
		{
			temp = arrg[j];
			arrg[j] = arrg [j+1];
			arrg[j+1] = temp;
		}
	}
}
printf("\nGoals: ");
for(i=0;i<n;i++)
{
	printf("%d ",arrg[i]);
}
getch();
}