#include <stdio.h>
#include <stdlib.h>  

int main() {
    int ranNum;
    ranNum = rand() % 10 + 1;
    int userGuess;
    int i = 0;
    printf("%d", ranNum);

    
    
    
    while(i<6) {
        printf("Guess a number between 1~10: ");
        scanf("%d", &userGuess);
        if (userGuess == ranNum) {
            printf("Number Matched!\n");
            break;
        } else if (userGuess > ranNum && userGuess > 5) {
            printf("Mystery number is bigger than your guess and 5\n Please try again!\n");
            i++;
        } else if (userGuess < ranNum && userGuess < 5) {
            printf("Mystery number is smaller than your guess and 5\n Please try again!\n");
            i++;
        }
    }


    return 0;
}