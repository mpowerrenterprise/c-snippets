#include<stdio.h>

int main(){

    int age = 30;
    int *pAge = &age;

    printf("%d",*pAge); //we have to use the * for this.
    return 0;

    //Dereferencing a pointer means getting the value that is stored in the memory location pointed by the pointer.
}
