#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Check String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Two Strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]s", str1);
                printf("Length of the string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                scanf(" %[^\n]s", str1);
                strcpy(str2, str1);
                printf("Copied string into destination: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]s", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]s", str2);
                strcat(str1, str2);
                printf("Combined string result: %s\n", str1);
                break;
            case 4:
                printf("Terminating String Application.\n");
                break;
            default:
                printf("Invalid input choice.\n");
        }
    } while (choice != 4);

    return 0;
}