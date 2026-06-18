#include <stdio.h>

int main() 
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=44;
    int low=0, high = n-1, mid, found= -1;
    
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        }
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    
    if(found!= -1) printf("Element %d found at index %d\n", key, found);
    else printf("Element not found\n");
    return 0;
}