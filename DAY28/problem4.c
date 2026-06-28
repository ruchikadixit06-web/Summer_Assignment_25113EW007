#include <stdio.h>
#include <string.h>

#define MAX 50

struct Contact {
    char name[50];
    char phone[20];
};

int main() 
{
    struct Contact directory[MAX];
    int count=0,choice;
    char search_name[50];

    do {
        printf("\n---Contact Directory Hub---\n");
        printf("1. Create New Contact card\n");
        printf("2. List All Stored Cards\n");
        printf("3. Search Contact Name\n");
        printf("4. Exit\n");
        printf("Enter selection:");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Contact First/Full Name:");
                    scanf(" %[^\n]s", directory[count].name);
                    printf("Enter Phone/Mobile Number:");
                    scanf("%s", directory[count].phone);
                    count++;
                    printf("Contact securely cached.\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("Directory database empty.\n");
                } else {
                    printf("\n--- Address Book Entries ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("Contact [%d] -> Name: %s | Phone Reference: %s\n", 
                               i + 1, directory[i].name, directory[i].phone);
                    }
                }
                break;
            case 3:
                printf("Enter target search name:");
                scanf(" %[^\n]s",search_name);
                int flag = 0;
                for (int i=0; i < count; i++) {
                    if (strcasecmp(directory[i].name, search_name) == 0) {
                        printf("Found match! Name: %s -> Tel: %s\n", directory[i].name,directory[i].phone);
                        flag = 1;
                        break;
                    }
                }
                if (!flag) printf("No registry matched that criteria.\n");
                break;
            case 4:
                printf("Disconnecting Address directory pipeline.\n");
                break;
            default:
                printf("Invalid selection.\n");
        }
    } while (choice != 4);

    return 0;
}