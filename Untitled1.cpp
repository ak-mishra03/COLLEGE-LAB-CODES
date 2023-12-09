# include <stdio.h>
int main ()
{
	int a;
	printf("enetr the no of the elements of the array:- ");
	scanf("%d",&a);
	int n[a];
	for(int i=0;i<a;i++)
	{
		printf("enetr the %d element of the array:- ",i+1);
		scanf("%d",&n[i]);
	}
	int k;
	printf("enter the element which u want to delete:- ");
	scanf("%d",&k);
	int g;
	printf("enetr the element insert behalf of delete element:- ");
	scanf("%d",&g);
	for(int i=0;i<a;i++)
	{
		if(n[i]==k)
		{
			n[i]=g;
		}
			else 
		{
			printf("not found!");
			break;
		}
	
	}
	for(int i=0;i<a;i++)
	{
		printf("\n%d ",n[i]);
	}
	return 0;
}
