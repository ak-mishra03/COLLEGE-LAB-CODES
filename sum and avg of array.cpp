# include <stdio.h>
int main ()
{
	int n;
	printf("enetr the no of the elements of the array:- ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("enetr the %d element of the array:- ",i+1);
		scanf("%d",&a[i]);
	}
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	float avg= sum/n;
	printf("sum of the no is %.02f\navg of the num is %.02f",sum,avg);
	return 0;
}

