#include <stdio.h>

int main() 
{
    char str[200];
    int count=0, i=0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] !='\0') {

        if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && 
            (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' || str[i+1] == '\0')) 
        {
            count++;
        }
        i++;
    }

    printf("Total number of words: %d\n",count);
    return 0;
}