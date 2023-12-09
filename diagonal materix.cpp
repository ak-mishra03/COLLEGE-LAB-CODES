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
			if(i==j)
			{
				printf("entrer the element:- ");
				scanf("%d",&a[i][j]);
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
				
			}
			else
			{
				printf(" 0 ");
			}
		}
		printf("\n ");
	}
	return 0;
}

