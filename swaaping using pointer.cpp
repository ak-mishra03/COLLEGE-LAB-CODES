#include <stdio.h>
int main()
{
	int a,b;
	printf("enetr the two no:- ");
	scanf("%d%d",&a,&b);
	int *p,*m,*c;
	p=&a;
	m=&b;
	c=p;
	p=m;
	m=c;
	printf("%d\n%d",*p,*m);
}
