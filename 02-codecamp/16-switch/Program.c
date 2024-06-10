#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade = 'B';

    switch(grade){

    case 'A':
        printf("You have entered A");
        break;
    case 'B':
        printf("You have entered B");
        break;
    case 'C':
        printf("You have entered C");
        break;

    default:
        printf("Wrong");
        break;

    }

    return 0;
}
