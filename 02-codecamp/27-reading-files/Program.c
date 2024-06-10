#include <stdio.h>
#include <stdio.h>

int main(){

    char line[255];
    FILE * fpointer = fopen("Employee.txt","r"); //r means reading.
    fprintf(fpointer,"Kuna, Software Engineer,\nJoker is a hacker");

    fgets(line,255,fpointer); // This will copy text and paste.
    printf("%s",line);

    fclose(fpointer);
    return 0;

}
