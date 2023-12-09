#include<stdio.h>
int main(){
	int n;
	printf("enetr the no of the elements :- ");
	scanf("%d",&n);
	int a[n],i;
	int *p;
	printf("enetr the elements in the array:- ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("elements after the reverse:- ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",*(p+i));
	}
}
