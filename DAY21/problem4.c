#include <stdio.h>

int main() 
{
    char str[] ="Continuous learning!";
    
    for(int i=0; str[i]!='\0'; i++) 
    {
        if(str[i] >='a' && str[i] <= 'z') 
        {
            
            str[i] = str[i] - 32; 
        }
    }
    //Difference between ASCII values of lower and uppercase characters is 32
    printf("Uppercase string: %s\n",str);
    return 0;
}