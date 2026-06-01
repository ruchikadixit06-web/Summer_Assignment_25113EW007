#include<stdio.h>
#include<math.h>

int main()
{
   int i,n;
   long long factorial = 1;
   printf("Enter the number=");
   scanf("%d", &n);

//To find the factorial of a number
   for(i=1;i<=n;i++)
{
   factorial *= i;
}
//To print the factorial

   printf("the factorial of %d = %lld\n",n,factorial);
   return 0;
}