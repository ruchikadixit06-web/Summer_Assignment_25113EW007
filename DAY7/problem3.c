#include<stdio.h>
int sumOfDigits(int m)
{
    if(m==0)
    return 0;
    else
    return ((m%10) +sumOfDigits(m/10));
}
int main()
{
    int n;
    printf("Enter the number to find sum of digits:");
    scanf("%d",&n);

    printf("Sum of digits is:%d\n",sumOfDigits(n));
    return 0;
}