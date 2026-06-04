#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int guess, tries = 0;
    int number = (rand() % (100 - 1 + 1)) + 1;

    printf(" *** GUESS THE NUMBER ***\n");
    do{
        printf("Guess the number between 1 and 100: \n");
        scanf("%d", &guess);
        tries++;
        if(guess > number){
            printf("Too high! Try again.\n");
        }else if(guess < number){
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! The number was %d.\n", number);
        }

    }while(guess != number);
    printf("Congratulations! You guessed the number in %d tries.\n", tries);
    

    return 0;
}