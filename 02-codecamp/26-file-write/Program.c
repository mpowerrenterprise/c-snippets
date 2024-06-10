#include <stdio.h>
#include <stdio.h>

int main(){

    FILE * fpointer = fopen("Employee.txt","w");
    fprintf(fpointer,"Kuna, Software Engineer,\nJoker is a hacker");

    fclose(fpointer);
    return 0;

}
