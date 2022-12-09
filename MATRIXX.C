#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],sub[3][3],i,j;
clrscr();

	printf("Enter The First Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The Second Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j] = a[i][j] - b[i][j] ;
		}
	}
	printf("subtraction of a matric");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",sub[i][j]);
			printf("\n");
		}
	}

getch();
}
