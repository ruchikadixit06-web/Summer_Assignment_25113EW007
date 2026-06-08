#include<stdio.h>
int fibo(int m)
{
    if(m==1)
    return 0;
    else if(m==2)
    return 1;
    else
    return(fibo(m-1)+ fibo(m-2));
}
int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}