#include <stdio.h>
int main()
{
	int a;
	printf("enetr the no:- ");
	scanf("%d",&a);
	int *p;
	p=&a;
	printf("%d\n%d",p,*p);
}
