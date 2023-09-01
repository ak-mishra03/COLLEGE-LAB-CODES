#include<stdio.h>
#include<conio.h>

int main()                           //creating main
{
	int a;                                                          //declaring variable
	printf("enter a number to check if its even or not: \n\n");          //statement for input
	scanf("%d",&a);          //user input
	if(a%2==0)                   //if else 
	{                            
	printf("the number is even");                  //even check
    }
    else
	{
    	printf("the number is odd");          //odd check
	}
		                   
	return 0;                                    //return statement0
}
