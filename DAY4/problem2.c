#include<stdio.h>
int main()
{
 int i,n,a,b,c;
 printf("Enter the term you need to find");
 scanf("%d",&n);
 a=0;   //first fibonacci term
 b=1;  //second fibonacci term
 if(n==1){
    printf("The first fibonacci term is:%d\n",a);
 }
else if(n==2){
    printf("The second fibonacci term is:%d\n",b);
}
else{
 //To print 3rd to nth term:
 for(i=1;i<=n-2;i++)
 {
  c=a+b;
  a=b;
  b=c;    
}
printf("The %dth fibonacci term is %d",n,b);
return 0;
}
}