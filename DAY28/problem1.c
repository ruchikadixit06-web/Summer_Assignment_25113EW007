#include<stdio.h>
#include<string.h>

#define MAX 50
struct book {
    int id;
    char title[100];
    char author[50];
    int is_issued;  //0=available, 1=issued
};
int main()
{
    struct book library[MAX];
    int count=0,choice, temp_id;

    do{
        printf("\n---Library Management---\n"); 
        printf("1. Add new book\n");
        printf("2. Display All books\n");
        printf("3. issue/return book\n");
        printf("4. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Book ID:");
                    scanf("%d", &library[count].id);
                    printf("Enter Title:");
                    scanf(" %[^\n]s", library[count].title);
                    printf("Enter Author: ");
                    scanf(" %[^\n]s", library[count].author);
                    library[count].is_issued = 0; 
                    count++;
                    printf("Book added successfully!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No books available in library.\n");
                } else {
                    printf("\n---Library Catalog---\n");
                    for (int i=0; i < count; i++) {
                        printf("ID: %d | Title: %s | Author: %s | Status: %s\n", 
                               library[i].id, library[i].title, library[i].author, 
                               (library[i].is_issued) ? "Issued" : "Available");
                    }
                }
                break;
            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &temp_id);
                int found = 0;
                for (int i=0; i < count; i++) {
                    if (library[i].id == temp_id) {
                        found = 1;
                        if (library[i].is_issued == 0) {
                            library[i].is_issued = 1;
                            printf("Book successfully issued!\n");
                        } else {
                            library[i].is_issued = 0;
                            printf("Book successfully returned to shelf!\n");
                        }
                        break;
                    }
                }
                if (!found) printf("Book ID not found.\n");
                break;
            case 4:
                printf("Exiting Library Management System.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);

    return 0;
}

