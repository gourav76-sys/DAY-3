#include <stdio.h>
#include <math.h>
int main (){
	float num;
	
	printf("enter a number (positive or negative):");
	scanf("%f",&num);
	
	printf("float value=%f\n",floor(num));
	printf("ceil value=%f\n",ceil(num));
	return 0;
}
