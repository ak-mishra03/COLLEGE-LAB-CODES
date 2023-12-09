#include <stdio.h>
int main()
{
	int n;
	printf("enetr the no:- ");
	scanf("%d",&n);
int a[n];
int *p=a;
for(int i=0;i<n;i++)
{
	printf("entee the %d element of the array:- ",i+1);
	scanf("%d",p++);
}
p=a;
for(int i=0;i<n;i++)
{
	printf("%d ",*(p++));
}
return 0;

}
