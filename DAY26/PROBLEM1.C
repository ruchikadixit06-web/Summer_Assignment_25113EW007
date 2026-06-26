#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret_num,guess,attempts=0;
    
    // To Seed the random number generator
    srand(time(0)); 
    secret_num = (rand()%100) + 1;        // Generates a number between 1 and 100

    printf("***Welcome to the Number Guessing Game!***\n");
    printf("I have chosen a number between 1 and 100.Try to guess it!\n\n");

    do {
        printf("Enter your guess:");
        scanf("%d",&guess);
        attempts++;

        if (guess > secret_num) {
            printf("Too high! Try again\n");
        } else if (guess < secret_num) {
            printf("Too low! Try again\n");
        } else {
            printf("\nCongratulations!You guessed the number in %d attempts.\n",attempts);
        }
    } while (guess != secret_num);

    return 0;
}