#include<stdio.h>
int main()
{
 int i,n1,n2,gcd,lcm;
 printf("Enter the value of n1 and n2");
 scanf("%d,%d",&n1,&n2);
//To find the gcd of two numbers 
 for(i=1;i<=n1 && i<=n2;i++)
 {
  if(n1%i==0 && n2%i==0)
  {
  gcd=i;
  }
}
//Now:To print the lcm of a number
lcm=(n1*n2)/gcd;
printf("the lcm of %d and %d is %d",n1,n2,lcm);
return 0; 
}