#include <stdio.h>

int main() 
{
    int pin = 1234,entered_pin;
    float balance = 5000.0;     // Initial default balance
    int choice;
    float amount;

    printf("--- Welcome to the ATM Simulator---\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d",&entered_pin);

    if (entered_pin != pin) {
        printf("Incorrect PIN. Access Denied!\n");
        return 0;
    }
    do {
        printf("\n***** ATM Main Menu *****\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice) 
        {
            case 1:
                printf("Your current balance is: %.2f\n",balance);
                break;
            case 2:
                printf("Enter amount to deposit:");
                scanf("%f",&amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited %.2f.New Balance: %.2f\n",amount,balance);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                if (amount > balance) {
                    printf("Insufficient Balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash. Remaining Balance: %.2f\n", balance);
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option!Please select a valid option\n");
        }
    } while (choice!=4);

    return 0;
}