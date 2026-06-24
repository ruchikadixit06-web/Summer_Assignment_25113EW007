#include <stdio.h>

int main() 
{
    int n1,n2;
    printf("Enter size of first sorted array:");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first sorted array:");

    for(int i=0; i<n1; i++) scanf("%d", &arr1[i]);
    printf("Enter size of second sorted array:");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter elements of second sorted array:");

    for(int i=0; i<n2; i++) scanf("%d", &arr2[i]);

    int arr3[n1 + n2];
    int i=0, j=0, k=0;

// To Merge elements while comparing
    while (i < n1 && j < n2) 
    {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < n1) arr3[k++] = arr1[i++];

    while (j < n2) arr3[k++] = arr2[j++];

    printf("Merged sorted array:");
    for(i=0; i < n1 + n2; i++) 
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");

    return 0;
}