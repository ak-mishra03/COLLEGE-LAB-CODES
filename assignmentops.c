#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 10,b,c,d,e,f;
	b=a++;
	c=++b;
	a*=c;
	d=--c;
	b%=a;
	e=++d;
	d+=a;
	f=d--;
	printf("a = %d \n\n b = %d \n\n c = %d \n\n d = %d \n\n e = %d \n\n f = %d \n\n", a,b,c,d,e,f);
} 
