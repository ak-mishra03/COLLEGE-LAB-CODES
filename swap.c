#include<stdio.h>
#include<conio.h>

int main()                     //creating main function
{
	float n1,n2,g,h,i;                     //declaring variables
	
	printf("Enter the numbers you want to swap: \n\n");              //statement for user input
    scanf("%f%f",&n1, &n2);                  //taking user input
    
    printf("previous values: n1 = %.2f and n2 = %.2f\n\n",n1,n2); //printing original values
    h= n1>n2;
    i = (n1!=n2);
    printf("is n1 > n2? : %f \n\n is n1 not equal to n2? : %f",h,i);
    
     n1 = n1*n2;
	 n2 = n1/n2;             //swapping numbers
     n1 = n1/n2;                           
    
    printf("\n\n after swapping: n1 = %.2f and n2 = %.2f \n\n",n1,n2);       //printing swapped numbers
    
    g = n1>n2;
    printf("is n1 > n2?: %f",g);
    
    return 0;           //return statement
}
