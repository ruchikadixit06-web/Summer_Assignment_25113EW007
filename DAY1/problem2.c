#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,table;
 printf("enter the number =");
 scanf("%d",&n);

 //To print the table of a  number
 
 for(i=1;i<=10;i++)
 {
 table=n*i;
printf(" %d*%d=%d\n",n,i,table);
 }
return 0;
}