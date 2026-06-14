#include <stdio.h>

int isPerfect(int n) 
{
    if (n <= 1) return 0;
    int sum = 1;
    for (int i=2; i*i<=n; i++) 
    {
        if (n % i == 0) 
        {
            if (i * i != n) 
            {
              sum = sum+i+(n/i);
            } else 
            {
              sum = sum+i;
            }
        }
    }
    
    return (sum == n);
}

int main() 
{
    int num;
    
    printf("Enter an integer:");
    scanf("%d", &num);
    
    if (isPerfect(num)) 
    {
        printf("%d is a perfect number.\n", num);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}