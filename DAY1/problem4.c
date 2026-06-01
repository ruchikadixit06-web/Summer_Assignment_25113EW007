#include<stdio.h>
int main()
{
 int count=0,n;
 printf("Enter the number");
 scanf("%d",&n);
 
 //To count the no. of digits in a number

 while(n!=0)
{
count=count+1;
n=n/10;
}
printf("the no.of digits in number is %d",count);
return 0;
}