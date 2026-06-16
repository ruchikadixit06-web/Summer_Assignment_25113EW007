#include <stdio.h>

int main() 
{
    int n,sum=0;
    float average;

    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }

    average =(float)sum/n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}