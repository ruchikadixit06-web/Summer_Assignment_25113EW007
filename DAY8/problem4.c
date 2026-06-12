#include<stdio.h>
int main()
{
   int i,n;
   printf("Enter the number of rows required to print:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    int j='1';
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
   }
return 0;
}