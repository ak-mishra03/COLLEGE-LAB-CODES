#include<stdio.h>
int main(){
	int n;
	printf("enetr the no of the elements :- ");
	scanf("%d",&n);
	int a[n],i;
	printf("enetr the elements in the array:- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p;
	int b[n];
	p=a;
	for(i=1;i<n;i++){
	 b[i]=*(p+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
}
