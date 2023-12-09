#include<stdio.h>
int main ()
{
	int n,m;
	printf("enetr the no of rows and colums:- ");
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("enetr the %d element of %d row:- ",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("sum of the materix is:- %d",sum);
	return 0;
}
