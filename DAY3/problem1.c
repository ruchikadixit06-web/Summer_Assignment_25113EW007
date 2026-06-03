#include <stdio.h>
int main()
{
 int i,count=0,n;
 printf("Enter the value of n");
 scanf("%d",&n);
//To check whether number is prime or not 
for(i=1;i<=n;i++)
{
 if(n%i==0)
{
 count=count+1;
} }
if(count==2)
{
printf("THE number %d is prime",n);
}
else
{
printf("The number %d is not prime",n);    
}
return 0;
}