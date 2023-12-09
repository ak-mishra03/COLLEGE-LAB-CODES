#include<stdio.h>
int main ()
{
	printf("enter elements of first materix:- \n");
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("enetr the %d element of %d row:- ",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of second materix:- \n");
	int b[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("enetr the %d element of %d row:- ",j+1,i+1);
			scanf("%d",&b[i][j]);
		}
	}
	int sum=0;
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				sum+= a[i][k] * b[k][j];
			}
			c[i][j]= sum;
			sum =0;
		}
	}
	printf("\nFinal materix is :- ");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\n\n%d ",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
