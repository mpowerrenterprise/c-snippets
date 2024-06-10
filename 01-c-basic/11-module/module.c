#include <stdio.h>

int main(){

	int picesOfPizza = 5;
	int numberOfEaters = 2;

	int leftOver = picesOfPizza % numberOfEaters;

	printf("%i\n",leftOver );

}