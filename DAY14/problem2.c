#include <stdio.h>

int main() 
{
    int n, target, count=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency:");
    scanf("%d", &target);

    for(int i=0; i<n; i++) 
    {
        if(arr[i] == target) 
        {
            count++;
        }
    }

    printf("Frequency of %d is %d\n",target,count);
    return 0;
}