#include<stdio.h>
int main()
{
 int n,sum=0,i=1;
 printf("enter the natural number n=");
 scanf("%d",&n);

//To find the sum of n natural numbers

 for(i=1;i<=n;i++)
 {
 sum+=i;
}

//To print the sum

printf("sum of %d natural numbers is= %d",n,sum);
return 0;
}