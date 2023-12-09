# include <stdio.h>
int main ()
{
	int a[20];
	for(int i=0;i<20;i++)
	{
		printf("enetr the %d element of the array:- ",i+1);
		scanf("%d",&a[i]);
	}
	int po=0;
	int neg=0;
	int even=0;
	int odd=0;
	int ze=0;
	for(int i=0;i<20;i++)
	{
		if(a[i]>0){
			po++;
			if(a[i]%2==0){
				even++;
				
			}
			else
				{
					odd++;
				}
		}
		else if(a[i]==0)
		{
			ze++;
		}
		else 
		{
			neg++;
		}
	}
	printf("odd:-%d\neven:-%d\nneg:-%d\npositive:-%d\nzero:-%d",odd,even,neg,po,ze);
	return 0;
}

