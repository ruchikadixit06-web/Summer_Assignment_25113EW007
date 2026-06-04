#include<stdio.h>
#include<math.h>

int main()
{
 int i,count,n,n1,n2,remainder;
 double sum;
 printf("Enter upper limit to find armstrong numbers");
 scanf("%d",&n);

 for(i=1;i<=n;i++){
 count=0;
 sum=0;
 
n1=i;
n2=i;
while(n1!=0)
 {
 count=count+1;
 n1=n1/10;
 }
 
 while(n2!=0)
 {
  remainder=n2%10;
  sum=sum+ round(pow(remainder,count));
  n2=n2/10;
 }
 if((int)sum==i){ 
    printf("%d is an armstrong number\n",i);
  } 
}
  return 0;
 }