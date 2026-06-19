#include <stdio.h>

int main() 
{
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int principalDiagonalSum=0;
    
    for(int i=0; i<3; i++) 
    {
        principalDiagonalSum+= mat[i][i];
    }
    
    printf("Sum of main diagonal elements: %d\n",principalDiagonalSum);
    return 0;
}