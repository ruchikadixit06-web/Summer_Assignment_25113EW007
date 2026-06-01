#include<stdio.h>
#include<math.h>

int main()
{
    int product=1,n,remainder;
    printf("Enter the value of n");
    scanf("%d",&n);
//To find the product of the digits of a number    
    while(n!=0)
    {
    remainder=n%10;
    product=product*remainder;
    n=n/10;
    }
   printf("The product of the digits of number %d is %d",n,product);
return 0; 
}