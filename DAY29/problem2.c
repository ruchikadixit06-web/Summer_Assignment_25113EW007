#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int size=0,choice,element,found;

    do {
        printf("\n--- Array Operations Dashboard ---\n");
        printf("1. Display Array Elements\n");
        printf("2. Insert Element at End\n");
        printf("3. Search for an Element\n");
        printf("4. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (int i=0; i < size; i++) {
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                if (size < MAX) {
                    printf("Enter the element to insert:");
                    scanf("%d",&element);
                    arr[size] = element;
                    size++;
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Array capacity full!\n");
                }
                break;
            case 3:
                if (size == 0) {
                    printf("Array is empty. Nothing to search.\n");
                } else {
                    printf("Enter element to search:");
                    scanf("%d",&element);
                    found = -1;
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            found=i;
                            break;
                        }
                    }
                    if (found != -1) {
                        printf("Element %d found at index position %d.\n",element,found);
                    } else {
                        printf("Element %d not found in the array.\n",element);
                    }
                }
                break;
            case 4:
                printf("Exiting Array Operations System.\n");
                break;
            default:
                printf("Invalid selection!\n");
        }
    } while (choice != 4);

    return 0;
}