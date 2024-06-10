#include <stdio.h>
#include <string.h>

struct PERSON
{
   char fname[50];
   char lname[50];
   char dob[50];
   
};


int main(){

   struct PERSON person1;

   strcpy(person1.fname,"Guna");
   strcpy(person1.lname,"Rakualn");
   strcpy(person1.dob,"1997.01.11");

   struct PERSON person2;
   strcpy(person2.fname,"Joeanna");
   strcpy(person2.lname,"Praveena");
   strcpy(person2.dob,"1996.12.17");

   printf("%s\n",person1.fname);
   printf("%s\n",person1.lname);
   printf("%s\n",person1.dob);

   printf("--------------------\n");

   printf("%s\n",person2.fname);
   printf("%s\n",person2.lname);
   printf("%s\n",person2.dob);

   return 0;
}