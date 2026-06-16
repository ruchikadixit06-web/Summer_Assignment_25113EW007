#include <stdio.h>
#include <limits.h>

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

    int first= INT_MIN, second= INT_MIN;

    for(int i=0; i<n; i++) 
    {
        if(arr[i] > first) 
        {
            second= first;
            first= arr[i];
        } else if(arr[i] > second && arr[i] != first) 
        {
            second= arr[i];
        }
    }

    if(second == INT_MIN) 
    {
        printf("There is no second largest element.\n");
    } else 
    {
        printf("Second largest element is %d\n",second);
    }
    return 0;
}