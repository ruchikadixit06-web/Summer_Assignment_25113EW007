#include <stdio.h>

int main() 
{
    int ans,score=0;

    printf("---Welcome to the Computer Science Mini Quiz---\n\n");

    //Question 1
    printf("Q1. Who is known as the father of C language?\n");
    printf("1) Dennis Ritchie   2) Bjarne Stroustrup\n3) James Gosling  4) Linus Torvalds\n");
    printf("Your answer (1-4):");
    scanf("%d",&ans);
    if (ans == 1) { printf("Correct!\n\n"); score++; } 
    else { printf("Wrong! Correct answer is 1.\n\n"); }

    // Question 2
    printf("Q2. Which of the following format specifiers is used for a string in C?\n");
    printf("1) %%c   2) %%d\n3) %%s   4) %%f\n");
    printf("Your answer (1-4):");
    scanf("%d",&ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; } 
    else { printf("Wrong! Correct answer is 3.\n\n"); }

    // Question 3
    printf("Q3. What is the size of an 'int' data type in standard 32/64 bit systems?\n");
    printf("1) 1 Byte   2) 2 Bytes\n3) 4 Bytes  4) 8 Bytes\n");
    printf("Your answer (1-4):");
    scanf("%d",&ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; } 
    else { printf("Wrong! Correct answer is 3.\n\n"); }

    // Final Results
    printf("---Quiz Finished!---\n");
    printf("Your total score:%d out of 3\n",score);
    if (score == 3) {
        printf("Excellent work!\n");
    } else if (score == 2) {
        printf("Good job!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}