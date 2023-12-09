# include <stdio.h>
int main ()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("enetr the %d element of the array:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("array before split:- \n");
	for(i=0;i<10;i++)
	{
		printf(" the %d element of the array:- %d\n",i+1,a[i]);
	}
	int b[5],c[5];
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
		for(i=0;i<5;i++)
	{
		c[i]=a[i+5];
	}
		for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
		for(i=0;i<5;i++)
	{
		printf("\n%d ",c[i]);
	}
	
	return 0;
}
	
