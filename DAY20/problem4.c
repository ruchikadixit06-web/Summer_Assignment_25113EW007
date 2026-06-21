#include <stdio.h>

int main() 
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    for(int j=0; j<3; j++) 
    {
        int colSum = 0;
        for(int i = 0; i < 3; i++) 
        {
            colSum+= mat[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, colSum);
    }
    return 0;
}