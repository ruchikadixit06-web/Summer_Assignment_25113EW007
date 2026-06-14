#include <stdio.h>

long long findfactorial(int n) 
{
    long long fact = 1;
    for (int i=1; i<=n; i++) 
    {
      fact*= i;
    }
    return fact;
}

int main() 
{
    int num;
    
    printf("Enter a positive integer:");
    scanf("%d",&num);
    
    if (num < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
        printf("Factorial of %d = %lld\n",num,findfactorial(num));
    }
    return 0;
}