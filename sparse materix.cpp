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
	int ze=0,ve=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				ze++;
			}
			else
			{
				ve++;
			}
		}
	}
	if(ze>ve)
	{
		printf("materix is sparce materix.");
	}
	else
	{
		printf("materix is not saprse materix.");
	}
	return 0;
}
