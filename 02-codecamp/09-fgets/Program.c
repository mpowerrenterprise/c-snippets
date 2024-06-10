#include<stdio.h>

int main(){

	char name[10]; //10 character length char variable.
	printf("Enter your name:\n");
	fgets(name,10,stdin); //name is the variable. 10 is the length.
	//fgets can be used to get multiple words with space.
	printf("Your name is %s\n",name);
	return 0;
}