#include<stdio.h>

int main(){

	int num1;
	int num2;
	printf("Enter first number.\n");
	scanf("%d", &num1);
	printf("Enter secound number\n");
	scanf("%d", &num2);

	int total = num1+num2;

	printf("The total value is %d \n",total);

	return 0;

}