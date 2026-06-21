#include <stdio.h>

int main() 
{
    int r1=2, c1=3, r2=3, c2=2;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{7, 8}, {9, 1}, {2, 3}};
    int product[2][2] = {0};
    
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++) 
        {
            for(int k=0; k<c1; k++) 
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Product Matrix:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}