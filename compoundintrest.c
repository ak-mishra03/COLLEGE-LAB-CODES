#include<stdio.h>              
#include<conio.h>
#include<math.h>

int main()             //declaring main function of integer return type
{   
	float p , r, t, n,ci;                  //declaring integer for user input
	
	printf("enter the principle, rate , time and number of time intrest is invoked per year : \n");  //instruction for user to enter their input
	
	scanf("%f %f %f %f",&p,&r,&t,&n);       //accepting input
    ci = p* pow(1+(r/n),n*t);            //calculating compound intrest
	printf("the compound intrest of principle= %.2f ,rate= %.2f, time = %.2f and n = %.2f is : %.3f \n", p, r,t,n,ci);    //printing styatement for result    
	return 0;         //return statement
}
