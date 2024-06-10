#include <stdio.h>

/*typedef is a keyword used in C language to assign alternative names to existing datatypes.
Its mostly used with user defined datatypes,
when names of the datatypes become slightly complicated to use in programs.*/

typedef int hot;  // I have changed the int as hot.
typedef float cold;//I have changed the float as cold.

int main(){

   hot intNum = 10;       //Instead of using int we used hot.
   cold floatNum = 55.55; //

   printf("%d\n",intNum);
   printf("%f\n",floatNum);

   return 0;

}