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
	int sum_row	=0,sum_col=0;
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
		sum_row+= a[i][j];
		sum_col+= a[j][i];
		} 
	}
	printf(" sum of rows=%d\nsum of the colmuns=%d",sum_row,sum_col);
	return 0;
}
