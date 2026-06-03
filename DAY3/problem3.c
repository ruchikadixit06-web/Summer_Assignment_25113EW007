#include<stdio.h>
int main()
{
 int i,n1,n2,gcd;
 printf("Enter the value of n1 and n2");
 scanf("%d,%d",&n1,&n2);
//to find the gcd of two numbers 
 for(i=1;i<=n1 && i<=n2;i++)
 {
  if(n1%i==0 && n2%i==0)
  {
  gcd=i;
  }
}
printf("the gcd of %d and %d is %d",n1,n2,gcd);
return 0; 
}