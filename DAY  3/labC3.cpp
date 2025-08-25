#include <stdio.h>
int main(){
	float length,breadth,area,perimeter;
	
	printf("enter length");
	scanf("%f",&length);
	printf("enter breadth");
	scanf("%f",&breadth);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("area=%f\n",area);
	printf("perimeter=%f\n",perimeter);
	return 0;
}
