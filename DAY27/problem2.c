#include <stdio.h>

#define MAX 100

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
};

int main() {
    struct Employee employees[MAX];
    int count=0,choice;

    do {
        printf("\n---Employee Management System---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Employee ID:");
                    scanf("%d", &employees[count].emp_id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", employees[count].name);
                    printf("Enter Designation: ");
                    scanf(" %[^\n]s", employees[count].designation);
                    count++;
                    printf("Employee registered successfully!\n");
                } else {
                    printf("Database limit reached!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\n---Employee Directory---\n");
                    for(int i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Designation: %s\n", 
                               employees[i].emp_id, employees[i].name, employees[i].designation);
                    }
                }
                break;
            case 3:
                printf("Exiting Employee System\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 3);

    return 0;
}