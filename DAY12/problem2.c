#include <stdio.h>
#include <math.h>

int isArmstrong(int n) 
{
    int original=n, temp=n;
    int sum=0, digits=0, remainder;

    while(temp > 0) 
    {
        digits++;
        temp/=10;
    }
    
    while (n > 0) 
    {
        remainder=n % 10;
        sum+= round(pow(remainder, digits)); 
        n/=10;
    }
    return(original == sum);
}

int main() 
{
    int num;
    
    printf("Enter an integer:");
    scanf("%d",&num);
    
    if(isArmstrong(num)) 
    {
        printf("%d is an Armstrong number.\n",num);
    } else 
    {
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}