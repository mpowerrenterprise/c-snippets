#include <stdio.h>
#include <stdlib.h>

double cube(double num); // This is called function sigature.

int main(){

    printf("%f",cube(10));
    return 0;
}

double cube(double num){

    return  num * num * num;

}
