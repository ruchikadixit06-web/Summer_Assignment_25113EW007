#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 4, 5, 6}; //MISSING NUMBER IS 3
    int n = 6; 
    
    int expectedSum = n*(n + 1) / 2;
    int actualSum = 0;
    
    for(int i=0; i<n-1; i++) 
    {
        actualSum += arr[i];
    }
    
    printf("Missing number is: %d\n", expectedSum - actualSum);
    return 0;
}