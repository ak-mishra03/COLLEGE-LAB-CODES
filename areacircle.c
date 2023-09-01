#include<stdio.h>              
#include<conio.h>
#include<math.h>

int main()             //declaring main function of integer return type
{   
	float area, r, pi = 3.14;                  //declaring integer for user input
	
	printf("enter the radius of circle : \n");  //instruction for user to enter their input
	
	scanf("%f",&r);       //accepting input
    area = pi * pow(r,2);            //calculating area of circle
	printf("the area of the circle with radius = %.2f is : %.3f \n", r, area);    //printing styatement for result    
	return 0;         //return statement
}
