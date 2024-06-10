#include <stdio.h>

int main(){


    int age = 30;
    int * pAge = &age;  //Pointer variable. This stores the memory address of the age variable.

    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;


    printf("Age memory address is: %p ",&age); //$age is the pointer.
    //%p means, we are telling that to print the memory address of the age.
    return 0;
}
