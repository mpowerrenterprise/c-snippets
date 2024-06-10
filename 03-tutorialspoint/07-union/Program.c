#include <stdio.h>
#include <string.h>

union Data {

   int i;
   float f;
   char str[20];
};

int main(){

   union Data data1;

   data1.i=10;
   printf("%d\n", data1.i);

   data1.f=202.2;
   printf("%d\n",data1.f);

   strcpy(data1.str,"Programming");
   printf("%s\n",data1.str);

   return 0;

}

//we will use one variable at a time which is the main purpose of having unions.
//Union uses one memory location for all data.