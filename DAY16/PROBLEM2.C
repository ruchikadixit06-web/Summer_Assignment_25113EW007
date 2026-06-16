#include <stdio.h>

int main() 
{
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxElement = arr[0], maxCount = 0;
    
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    printf("Element with maximum frequency is %d (occurs %d times)\n", maxElement, maxCount);
    return 0;
}