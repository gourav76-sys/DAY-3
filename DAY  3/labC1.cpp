#include<stdio.h>;
int main(){
	int num, lastdigit1, lastdigit2;
	printf("enter an integer");
	scanf("%d", num);
	
	lastdigit1=num % 10;
	lastdigit2=num -(num/10)*10;
	printf("the last digit using modulus: %d\n",lastdigit1);
	printf("the last digit without using modulus: %d\n",lastdigit2);
	return 0; 
}
