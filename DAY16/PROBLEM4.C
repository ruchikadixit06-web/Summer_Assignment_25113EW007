#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = 0;
    
    for (int i=0; i<n; i++) {
        int isDuplicate = 0;
        for (int j=0; j<newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    printf("Array after removing duplicates:");
    for(int i=0; i<newSize; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}