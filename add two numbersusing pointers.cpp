#include <stdio.h>
int main()
{
	int a,b;
	printf("enetr the two numbers:- ");
	scanf("%d %d",&a,&b);
	int *p,*q;
	p=&a;
	q=&b;
	int sum=*p+*q;
	printf("%d",sum);
}
