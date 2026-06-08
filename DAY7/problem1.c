#include<stdio.h>

int factorial(int m)
{
    if(m==0)
     return 1;
    else
     return (m*factorial(m-1));
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Factorial is : %d\n",factorial(n));
    return 0;
}

