#include<stdio.h>

int main(){

	char name[10]; //10 character length char variable.
	printf("Enter your name:\n");
	scanf("%s",name); // Do not need to used pointer for char variable.
	printf("Your name is %s\n",name);
	return 0;
}