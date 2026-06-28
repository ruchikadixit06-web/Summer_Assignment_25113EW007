#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student 
{
    int roll_no;
    char name[50];
    char course[50];
};

int main() 
{
    struct Student students[MAX];
    int count=0,choice;

    do {
        printf("\n---Student Record Management System---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Roll Number:");
                    scanf("%d", &students[count].roll_no);
                    printf("Enter Name:");
                    scanf(" %[^\n]s", students[count].name);
                    printf("Enter Course:");
                    scanf(" %[^\n]s",students[count].course);
                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Database Full!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No records found\n");
                } else {
                    printf("\n---Student List---\n");
                    for(int i=0; i<count; i++) {
                        printf("Roll No: %d | Name: %s | Course: %s\n", 
                               students[i].roll_no,students[i].name,students[i].course);
                    }
                }
                break;
            case 3:
                printf("Exiting System.Goodbye!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice!=3);

    return 0;
}