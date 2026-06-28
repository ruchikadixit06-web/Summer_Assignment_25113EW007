#include <stdio.h>

#define MAX 50

struct Salary 
{
    int emp_id;
    char name[50];
    float basic;
    float allowance;
    float deduction;
    float net_salary;
};

int main() {
    struct Salary payroll[MAX];
    int count=0, choice;

    do {
        printf("\n---Salary Management System---\n");
        printf("1. Add Salary Record\n");
        printf("2. Generate Salary Slips\n");
        printf("3. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter Employee ID:");
                    scanf("%d", &payroll[count].emp_id);
                    printf("Enter Employee Name:");
                    scanf(" %[^\n]s", payroll[count].name);
                    printf("Enter Basic Salary:");
                    scanf("%f", &payroll[count].basic);
                    printf("Enter Allowances:");
                    scanf("%f", &payroll[count].allowance);
                    printf("Enter Deductions:");
                    scanf("%f", &payroll[count].deduction);

                    // Compute net pay
                    payroll[count].net_salary = payroll[count].basic + payroll[count].allowance - payroll[count].deduction;
                    count++;
                    printf("Salary record calculated and stored!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No salary data available.\n");
                } else {
                    for(int i=0; i<count; i++) {
                        printf("\n--- Salary Slip for %s (ID: %d) ---\n", payroll[i].name, payroll[i].emp_id);
                        printf("Basic Salary:   $%.2f\n", payroll[i].basic);
                        printf("Allowances:     +$%.2f\n", payroll[i].allowance);
                        printf("Deductions:     -$%.2f\n", payroll[i].deduction);
                        printf("-----------------------------\n");
                        printf("Net Salary:     $%.2f\n", payroll[i].net_salary);
                    }
                }
                break;
            case 3:
                printf("Closing Payroll Terminal.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 3);

    return 0;
}