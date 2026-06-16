#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0];
    for(int i=0; i<n-1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n-1] = first;

    printf("Array after Left Rotation:");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}