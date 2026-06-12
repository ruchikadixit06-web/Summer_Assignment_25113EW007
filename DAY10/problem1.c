#include<stdio.h>
int main()
{
   int i,j,rows;
   printf("Enter the number of rows required to print:");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
   {
    for(j=1;j<=rows-i;j++)
    {
        printf(" ");
    }
    for(int k=1; k<= (2 * i -1); k++)
    {
        printf("*");
    }
    printf("\n");
   }
return 0;
}