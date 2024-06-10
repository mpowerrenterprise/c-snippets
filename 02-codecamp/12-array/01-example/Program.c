#include<stdio.h>

int main(){


	int numbers[] ={2,4,16,32,64,128,256};

	printf("%d\n",numbers[0] );

	//modify the 0 element.

	numbers[0] = 200; // replacement took palce.

	printf("%d\n",numbers[0]);

	return 0;

}