#include <stdio.h>
#include <string.h>



struct PERSON
{
   char fname[50];
   char lname[50];
   char dob[50];
   
};

void printer(struct PERSON p); // This is function initailation.
// parameter is struct type PERSON.

int main(){

   struct PERSON person1;

   strcpy(person1.fname,"Guna");
   strcpy(person1.lname,"Rakualn");
   strcpy(person1.dob,"1997.01.11");

   struct PERSON person2;
   strcpy(person2.fname,"Joeanna");
   strcpy(person2.lname,"Praveena");
   strcpy(person2.dob,"1996.12.17");

   printer(person1); // call the function.
   printer(person2);

   return 0;
}


void printer(struct PERSON p){ //This is printer function.

   printf("%s\n",p.fname);
   printf("%s\n",p.lname);
   printf("%s\n",p.dob);
   printf("---------------\n");
}