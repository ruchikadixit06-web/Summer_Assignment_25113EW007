#include <stdio.h>

int main() 
{
    char str[100];
    int freq[256] = {0};
    int found=0;

    printf("Enter a string:");
    scanf("%s",str);
// To count frequencies:
    for (int i=0; str[i] !='\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

// To Find the first one with a frequency of 1:
    for (int i=0; str[i] !='\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) 
        {
            printf("First non-repeating character is:'%c'\n",str[i]);
            found=1;
            break;
        }
    }

    if(!found) 
    {
        printf("All characters repeat or string is empty\n");
    }
    return 0;
}