#include <stdio.h>

int max(int a, int b);

int main(){

   int num1=10;
   int num2=5;

   int total;

   total = max(num1,num2);

   printf("Total is: %d\n",total);

   return 0;

}

int max(int a,int b){

   return a+b;

}