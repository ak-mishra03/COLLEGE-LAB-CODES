#include<stdio.h>
int main ()
{
	printf("enter elements of first materix:- \n");
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
	return 0;
	
}
