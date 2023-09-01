#include<stdio.h>
#include<conio.h>

int main()                     //creating main function
{
	float l ,b , area, perimeter;                     //declaring variables
	
	printf("Enter the length and breadth of the rectangle: \n");              //statement for user input
    scanf("%f%f",&l, &b);                  //taking user input
    
    perimeter = 2*(l+b);                    //calculating perimeter of rectangle
    area = l*b;                              //calculating area of rectangle
    
    printf("The perimeter of the rectangle with length = %.2f and breadth = %.2f is %.2f units \n", l,b,perimeter); //printing perimeter
    printf("The area of the rectangle with length = %.2f and breadth = %.2f is %.2f sq. units \n", l,b,area);       //printing area
    
    return 0;           //return statement
}
