#include<stdio.h>
#include<math.h>

int main()
{
  int i,n,n1,sum=0,remainder;
  printf("Enter the number");
  scanf("%d",&n);  
  n1=n;
  while(n > 0)
  {
  remainder= n%10; //Extracting last digit
  int product=1;
  for(int i=1;i<=remainder;i++)
  {
    product=product*i;   // TO find the factorial of digit
  }
    sum=sum+product;
    n=n/10;
  }
  if(sum==n1 && n1>0)
  {
    printf("%d is a strong number\n",n1);
  }
  else{
    printf("is not a strong number\n");
  }
  return 0;
}
