#include<stdio.h>
int main()
{
 int i,n,a,b,c;
 printf("Enter the value of n"); //n here is the number of fibonacci terms required to print in series.
 scanf("%d",&n);
 a=0;   //initializing starting 2 terms of fibonacci series
 b=1;
 printf("Fibonacci Series:\n%d\n%d\n",a,b);
//To print other (n-2)terms:
 for(i=1;i<=n-2;i++)
 {
  c=a+b;
  printf("%d\n",c);
  a=b;
  b=c; 
}
return 0;
}   