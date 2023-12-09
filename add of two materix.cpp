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
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	printf("final materix:- \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("The %d element of %d row:-%d\n",j+1,i+1,c[i][j]);
			
		}
	}
	return 0;
}
