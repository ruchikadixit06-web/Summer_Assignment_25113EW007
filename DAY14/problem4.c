#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in given array: \n");
    for(int i=0; i<n; i++) 
    {
        for(int j= i+1; j<n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                printf("%d \n", arr[j]);
                break;
            }
        }
    }
    return 0;
}