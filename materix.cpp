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
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("The %d element of %d row:- %d\n",j+1,i+1,a[i][j]);
			
		}
	}
	return 1;
}
