#include<stdio.h>
#include<math.h>

int main()
{
 int i,count=0,n,n1,n2,remainder,m=0;
 printf("Enter the number to check if its armstrong: ");
 scanf("%d", &n);
//To check whether the entered number is armstrong number or not'
 n1=n;
 n2=n;
 if (n==0){
   count=count+1;
}else 
 {
   while(n1!=0)
 {
 count=count+1;
 n1=n1/10;
 } }
 
 while(n2!=0)
 {
  remainder=n2%10;
  m=m+ (int)(pow(remainder,count)+0.5);
  n2=n2/10;
 }
 if(m == n){
  printf("%d is an armstrong number\n",n); 
 }
 else{
    printf("not an armstrong number\n");
 } 
 return 0; 
}

