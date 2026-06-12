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
    for(int k=0; k<i; k++)
    {
        printf("%c",'A'+ k);
    }
    for(int l=i-2;l>=0;l--)
    {
        printf("%c",'A'+l);
    }
    printf("\n");
   }
return 0;
}