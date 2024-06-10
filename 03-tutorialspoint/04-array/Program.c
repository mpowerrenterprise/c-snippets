#include <stdio.h>

int main(){

   int nums[10];

   for(int i=0; i<10; i++){

      nums[i] = 100 + i;

   }


   for(int s=0;s<10;s++){

      printf("%d\n",nums[s]);

   }

}