#include <stdio.h>
#include <stdlib.h> // For rand and srand functions
#include <time.h>   // For time function

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    int no_of_gussess = 0;
    int guessed;
    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Print the generated random number
    //printf("Random number between 1 and 100: %d\n", random_number);
    do{
        printf("Guess the number:");
        scanf("%d",&guessed);
        if(guessed>random_number){
            printf("Lower Number Please\n");
        }
        else{
            printf("Higher Number Please\n");
        }
        no_of_gussess++;
    }while(guessed !=random_number);
    printf("You guess the number in %d guesses",no_of_gussess);
    return 0;
}
