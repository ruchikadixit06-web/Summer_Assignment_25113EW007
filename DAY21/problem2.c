#include <stdio.h>

int main() 
{
    char str[] ="Programming";
    int len=0;
    
    while(str[len] != '\0') len++;
    
    printf("Reversed String:");
    for(int i = len - 1; i>= 0; i--) 
    {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}