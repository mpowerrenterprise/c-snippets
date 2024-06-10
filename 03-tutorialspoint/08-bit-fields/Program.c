#include <stdio.h>
#include <string.h>

struct HOME // By default struct has 8 bytes of memory.
{
   
   unsigned int width:1; //unsigned means positive numbers only.
   //width can hold 1 bit of memory. more than that not allowed.

};

int main(){

   struct HOME home1;
   home1.width = 1; 
   printf("%d\n",home1.width);

   return 0;

}