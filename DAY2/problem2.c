#include<stdio.h>
int main()
{
    int remainder,n,reverse=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    while (n!=0)
    {
      remainder=n%10;
      reverse=(reverse*10)+ remainder;
      n=n/10;
    }
    printf("The reverse of the number %d is %d",n,reverse);
    return 0;
}

