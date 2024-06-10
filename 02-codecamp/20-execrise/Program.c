#include <stdio.h>


int main(){

    int secertNum=2;
    int guess;
    int guessCount=0;
    int limitGuess=3;
    int outOfGuess=0;

    while(guess!=secertNum && outOfGuess==0){

        if(guessCount < limitGuess){

            printf("Enter a number.");
            scanf("%d",&guess);
            guessCount++;

        }else{


            outOfGuess=1;

        }

    }

    if(outOfGuess==1){

        printf("You have run out of changes");

    }else{

        printf("You have won.");
    }

    return 0;

}
