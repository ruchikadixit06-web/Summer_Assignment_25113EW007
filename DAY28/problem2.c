#include <stdio.h>

#define MAX 10

struct Account {
    int account_number;
    char name[50];
    float balance;
};

int main() {
    struct Account bank[MAX];
    int count=0,choice,acc_num,found;
    float amt;

    do {
        printf("\n---Core Banking Account System---\n");
        printf("1. Open New Account\n");
        printf("2. View All Accounts\n");
        printf("3. Transaction (Deposit/Withdrawal)\n");
        printf("4. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("Assign Account Number:");
                    scanf("%d", &bank[count].account_number);
                    printf("Enter Primary Account Holder Name:");
                    scanf(" %[^\n]s", bank[count].name);
                    printf("Enter Initial Deposit: $");
                    scanf("%f",&bank[count].balance);
                    count++;
                    printf("Account registered successfully!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No bank registries found.\n");
                } else {
                    for (int i=0; i < count; i++) {
                        printf("Acc No: %d | Holder: %s | Balance: $%.2f\n", 
                               bank[i].account_number, bank[i].name, bank[i].balance);
                    }
                }
                break;
            case 3:
                printf("Enter Account Number:");
                scanf("%d",&acc_num);
                found = -1;
                for (int i=0; i < count; i++) {
                    if (bank[i].account_number == acc_num) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) {
                    int tx;
                    printf("1. Deposit\n2. Withdraw\nSelect type: ");
                    scanf("%d", &tx);
                    if (tx == 1) {
                        printf("Enter deposit amount:$");
                        scanf("%f", &amt);
                        bank[found].balance += amt;
                        printf("Transaction complete. Balance: $%.2f\n", bank[found].balance);
                    } else if (tx == 2) {
                        printf("Enter withdrawal amount:$");
                        scanf("%f",&amt);
                        if (amt <= bank[found].balance) {
                            bank[found].balance -= amt;
                            printf("Transaction complete. Balance: $%.2f\n", bank[found].balance);
                        } else {
                            printf("Insufficient funds!\n");
                        }
                    }
                } else {
                    printf("Account profile not found.\n");
                }
                break;
            case 4:
                printf("Closing core banking pipeline.\n");
                break;
            default:
                printf("Invalid Selection!\n");
        }
    } while(choice != 4);

    return 0;
}