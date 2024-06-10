#include <stdio.h>
#include <float.h>

int main(){

   printf("The size of float %d\n", sizeof(float));
   printf("Maximum float value: %e\n",FLT_MAX);
   printf("Minimum float value: %e\n",FLT_MIN);
   
   return 0;
}