#include<stdio.h>
int main()
{
    int remainder,n,reverse=0,n1;
    printf("Enter the value of n");
    scanf("%d,%d",&n,&n1);
    n1=n;
//To find the reverse of a number    
    while (n!=0)
    {
      remainder=n%10;
      reverse=(reverse*10)+ remainder;
      n=n/10;
    }
//To check whether the number is pallindrome or not
if (n1==reverse) 
printf("The entered no. is a pallindrome no.");
else
printf("The entered no. is not a pallindrome number");
return 0;
}