# include <stdio.h>
int main ()
{
	int n;
	printf("enetr the no of the elements of the array:- ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enetr the %d element of the array:- ",i+1);
		scanf("%d",&a[i]);
	}
	int z;
	printf("enetr th number:- ");
	scanf("%d",&z);
	int count=0;
	for(i=0;i<n;i++)
	{
		if (a[i]==z)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("%d is found in array %d time",z,count);
	}
	else 
	{
		printf("%d is not found in array",z);
	}
	return 0;
}
