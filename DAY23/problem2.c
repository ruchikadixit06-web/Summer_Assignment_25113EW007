#include <stdio.h>

int main() 
{
    char str[100];
    int visited[256]={0};
    int found=0;

    printf("Enter a string:");
    scanf("%s",str);

    for (int i=0; str[i] !='\0'; i++) {
        unsigned char val = str[i];
        if (visited[val] == 1) 
        {
            printf("First repeating character is: '%c'\n", str[i]);
            found=1;
            break;
        }
        visited[val] = 1;
    }

    if (!found) 
    {
        printf("No repeating characters found\n");
    }
    return 0;
}