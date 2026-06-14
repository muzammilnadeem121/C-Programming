#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerChoice();
int getPlayerChoice();
void checkWinner(int playerChoice, int computerChoice);

int main(){

    printf("*** ROCK, PAPER, SCISSORS GAME ***\n");
    printf("Enter your Choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    int playerChoice = getPlayerChoice();
    int computerChoice = getComputerChoice();
    checkWinner(playerChoice, computerChoice);
    return 0;
}

int getPlayerChoice(){
    int playerChoice;
    printf("Your Choice: ");
    scanf("%d", &playerChoice);
    if(playerChoice < 1 || playerChoice > 3){
        printf("Invalid Choice! Please choose between 1 and 3.\n");
        return getPlayerChoice();
    }
    return playerChoice;
}

int getComputerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    printf("Computer Choice: %d\n", computerChoice);
    return computerChoice;
}

void checkWinner(int playerChoice, int computerChoice){
    if(playerChoice == computerChoice){
        printf("It's a tie!\n");
    } else if((playerChoice == 1 && computerChoice == 3) || 
              (playerChoice == 2 && computerChoice == 1) || 
              (playerChoice == 3 && computerChoice == 2)){
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}