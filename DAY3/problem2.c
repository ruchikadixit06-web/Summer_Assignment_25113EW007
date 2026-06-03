#include<stdio.h>
int main()
{
 int i,n,j,isprime;
 printf("Enter the value of n:");
 scanf("%d",&n);
//To print prime numbers in range
printf("prime numbers up to %d are: \n",n);
for(i=2;i<=n;i++)
{
isprime=1;
for(j=2;j<=i/2;j++)
{
 if(i%j==0)
 {
    isprime=0;
    break;
 }   
}
if(isprime==1)
{
    printf("%d\n",i);
} }
printf("\n");
return 0;
}