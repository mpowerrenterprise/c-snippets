#include <stdio.h>

void decreaser();

int main(){


   for (int i = 0; i < 5; ++i)
   {
      
   
   decreaser();
   
   }
}

void decreaser(){
   
   int static count = 5;  // This static keeps the value safe from being deleted.
   printf("%d\n",count);
   count--;
   
}