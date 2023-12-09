#include<stdio.h>
int main(){
	int n;
	printf("enetr the no of the elements :- ");
	scanf("%d",&n);
	int a[n],i,b[n];
	printf("enetr the elements of the first  array:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enetr the elements of the second  array:- ");
		for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int *p,*q;
	p=a;
	q=b;
	for(i=0;i<n;i++)
	{
		*p=*p+*q;
		*q=*p-*q;
		*p=*p-*q;
	}
	printf("elements after swapping:- ");
		for(i=0;i<n;i++)
	{
		printf("\n%d %d",a[i],b[i]);
	}
}

