#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], longest[50] ="", current[50] ="";
    int i=0, j=0, max_len=0;

    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);

    while (1) 
    {
         if (str[i] != ' ' && str[i] != '\t' && str[i] !='\n' && str[i] !='\0') 
         {
            current[j++] = str[i];
        } else {
            current[j] = '\0'; // Terminate current word
            
            if (j > max_len) 
            {
                max_len = j;
                strcpy(longest, current);
            }
            j=0;
            
            if (str[i] == '\0' || str[i] == '\n') 
            {
                break;
            }
        }
        i++;
    }

    printf("The longest word is: \"%s\" with length %d\n", longest, max_len);
    return 0;
}