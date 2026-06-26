#include <stdio.h>

int main() {
    char name[50];
    int age,choice;

    printf("***Voting Eligibility System***\n");
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your age:");
    scanf("%d",&age);

    if (age >= 18) {
        printf("\nHello %s, you are ELIGIBLE to vote\n",name);
        printf("1. Party A\n2. Party B\n3. Party C\n4. NOTA\n");
        printf("Cast your vote (1-4):");
        scanf("%d",&choice);

        if (choice >= 1 && choice <= 4) {
            printf("Thank you! Your vote has been recorded successfully\n");
        } else {
            printf("Invalid selection.Vote wasted!\n");
        }
    } 
    else {
        printf("\nSorry %s,you are NOT eligible to vote yet.\n",name);
        printf("You need to wait %d more year(s).\n",18 - age);
    }

    return 0;
}