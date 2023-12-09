#include<stdio.h>
int main ()
{
	printf("enter elements of materix:- \n");
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("enetr the %d element of %d row:- ",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
	}
	int even=0,odd=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	printf("numbers of the odd elements = %d\nnumbers of the even elements = %d",odd,even);
	return 0;
}
