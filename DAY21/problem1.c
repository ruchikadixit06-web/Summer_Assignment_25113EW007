#include <stdio.h>

int main() 
{
    char str[] = "Smartly progressing";
    int length=0;
    
    while(str[length] != '\0') 
    {
        length++;
    }
    printf("Length of string is: %d\n",length);
    return 0;
}