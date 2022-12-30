#include <stdio.h>
#include <stdlib.h>  

int main() {
    double ranNum;
    ranNum = rand() % 10 + 1;
    double userGuess;
    int i = 0;
    int h = 0;
    printf("Welcome to the Guessing Game~~!\nYou have total of 5 changes to guess the mystery number.\nYou can also use 1 hint by typing 777\n");

    while(i<5 && h < 2) {
        printf("Guess a number between 1~10: ");
        scanf("%lf", &userGuess);
        if (userGuess == ranNum) {
            printf("Number Matched!\n");
            exit(0);
        } else if (userGuess == 777) {
            if (ranNum >= 5) {
                printf("Mystery number is greater or equal to 5\n");
                h++;
            } else {
                printf("Mystery number is smaller than 5\n");
                h++;
            }
        } else if (userGuess > ranNum) {
            printf("Mystery number is smaller than your guess\nPlease try again!\n");
            i++;
        } else if (userGuess < ranNum) {
            printf("Mystery number is bigger than your guess\nPlease try again!\n");
            i++;
        } 
        
    }

    printf("You have used all your chances!\n");

    return 0;
}