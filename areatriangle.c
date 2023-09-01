#include<stdio.h>              
#include<conio.h>

int main()             //declaring main function of integer return type
{   
	float b,h,area;                      //declaring integer for user input
	
	printf("enter the height and  bases of triangle: \n");  //instruction for user to enter their input
	
	scanf("%f %f",&b,&h);       //accepting input
    area = (h*b)/2;            //calculating area of triangle
	printf("the area of the right angle triangle with height = %.2f and breadth = %.2f is %.3f: \n", h, b, area);    //printing statement for result    
	return 0;         //return statement
}
