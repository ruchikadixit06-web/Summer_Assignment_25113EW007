#include<stdio.h>
int main()
{
   int i,j,size;
   printf("Enter the number of rows required to print:");
   scanf("%d",&size);
   for(i=1;i<=size;i++)
   {
    int j='1';
    for(j=1;j<=size;j++)
    {
        if (i==1 || i==size || j==1 || j==size)
        {
        printf("*");
        }
    else{
        printf(" ");
        }
    }
    printf("\n");
   }
return 0;
}