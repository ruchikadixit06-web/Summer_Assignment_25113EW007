#include<stdio.h>
float findsum(float a,float b)
{
 return a+b; 
}
int main()
{
    float num1,num2;
    printf("Enter two numbers:");
    scanf("%f %f",&num1, &num2);
    
    printf("sum=%.2f\n",findsum(num1,num2));
    return 0;
}