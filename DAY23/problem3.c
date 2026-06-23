#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int count[256] = {0};
    int isAnagram = 1;

    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);

    if (strlen(str1) != strlen(str2)) 
    {
      isAnagram =0;
    } else {
        // To Update  the frequency counts
        for (int i=0; str1[i] !='\0'; i++) {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
        }

        for (int i=0; i<256; i++) 
        {
            if (count[i]!= 0) {
                isAnagram=0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams\n");
    } else 
    {
        printf("The strings are not anagrams\n");
    }
    return 0;
}