#include <stdio.h>

int main() 
{
    int arr[] = {1, 4, 6, 8, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 11;
    int found = 0;
    
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == targetSum) 
            {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(!found) printf("No pair found with the given sum\n");
    return 0;
}