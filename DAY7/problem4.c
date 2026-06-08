#include<stdio.h>
int reverseNumber(int m,int reversed)
{
    if(m==0)
    return reversed;
    else
    return reverseNumber(m/10,(reversed*10) +(m%10));
}
int main()
{
    int n;
    printf("Enter the number to reverse:");
    scanf("%d",&n);

    printf("Reverse number is:%d\n",reverseNumber(n,0));
    return 0;
}