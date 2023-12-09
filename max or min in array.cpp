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
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("maximum value is:- %d\nminmum value is:- %d",max,min);
	return 0;
}

