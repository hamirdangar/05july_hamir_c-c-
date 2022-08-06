#include<stdio.h>
#include<conio.h>
void main()
{	int p,r,t;
	clrscr();
	printf("enter principal (p)");
	scanf("%f",&p);
	printf("enter rate (r)");
	scanf("%f",&r);
	printf("enter time (t)");
	scanf("%f",&t);
	printf("\nsimpal int %f",(p*t*r)/100);
	printf("\ncopound int %f",p*(1+r)/100);
	getch();
}