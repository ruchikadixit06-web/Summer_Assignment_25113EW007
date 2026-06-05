#include<stdio.h>

int main()
{
 int n, i,sum=0;
 printf("Enter the value of n");
 scanf("%d",&n);
 //To print the perfect number
 for(i=1;i<=n/2;i++)
 {
  if(n%i==0&& n>0){
     sum =sum+i;
    }
 }
if(n==sum){
    printf("%d is aperfect number",n);
}
else{
    printf("is not aperfect number");
}
return 0;
}