#include<stdio.h>
#include<math.h>

int main()
{
    int remainder,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
//To find the sum of the digits of a number    
    while(n!=0)
    {
    remainder=n%10;
    sum=sum+remainder;
    n=n/10;
    }
    printf("The sum of the digits on %d=%d",n,sum);
    return 0;
}