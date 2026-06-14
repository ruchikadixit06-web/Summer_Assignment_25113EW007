#include <stdio.h>

int findmaximum(int a,int b) 
{
  return (a > b) ? a : b;
}

int main() 
{
    int num1,num2;
    
    printf("Enter two integers:");
    scanf("%d %d",&num1,&num2);
    
    printf("Maximum value is: %d\n",findmaximum(num1,num2));
    return 0;
}