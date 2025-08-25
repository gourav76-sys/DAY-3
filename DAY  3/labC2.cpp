#include <stdio.h>
#include <math.h>
int main() {
	float p,r,t,ci,amount;
	
	printf("enter principal: ");
	scanf("%f", &p);
	
	printf("enter rate of interest: ");
	scanf("%f", &r);
	 
	 printf("enter time(in years): ");
	 scanf("%f",&t);
	 
	 r=r/100;
	 amount =p * pow((1 + r/100),t );
	 ci=amount -p;
	 
	 printf("compound interset=% f\n", ci);
	 printf("total amount=% f\n", amount);
	 return 0;
}
