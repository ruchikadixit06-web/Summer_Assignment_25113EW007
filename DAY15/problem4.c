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

    int count=0;

    for (int i=0; i<n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }

    while (count < n) {
        arr[count++] = 0;
    }

    printf("Array after moving zeroes to end:");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}