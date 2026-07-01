#include <stdio.h>
#define MAX_ITEMS 50

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[MAX_ITEMS];
    int item_count=0, choice, search_id, found_idx;

    do {
        printf("\n--- Corporate Inventory Management System ---\n");
        printf("1. Add New Stock Product Item\n");
        printf("2. Display All Stock Inventory Items\n");
        printf("3. Query Particular Item Stock\n");
        printf("4. Exit\n");
        printf("Enter selection choice:");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                if (item_count < MAX_ITEMS) {
                    printf("Assign unique Product Item ID:");
                    scanf("%d", &inventory[item_count].id);
                    printf("Enter Product Description Name:");
                    scanf(" %[^\n]s", inventory[item_count].name);
                    printf("Enter Available Quantity Count: ");
                    scanf("%d", &inventory[item_count].quantity);
                    printf("Enter Single Unit Base Price ($):");
                    scanf("%f", &inventory[item_count].price);
                    item_count++;
                    printf("Product registered onto store inventory.\n");
                } else {
                    printf("Inventory tracking registry full.\n");
                }
                break;
            case 2:
                if (item_count == 0) {
                    printf("No inventory details tracked inside system.\n");
                } else {
                    printf("\n--- Current Available Stock List ---\n");
                    for (int i = 0; i < item_count; i++) {
                        printf("ID: %d | Name: %-15s | In-Stock: %d Units | Rate: $%.2f\n",
                               inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                    }
                }
                break;
            case 3:
                printf("Enter Target Product Item ID:");
                scanf("%d",&search_id);
                found_idx = -1;
                for (int i=0; i < item_count; i++) {
                    if (inventory[i].id == search_id) {
                        found_idx = i;
                        break;
                    }
                }
                if (found_idx != -1) {
                    printf("\n--- Product Match Information ---\n");
                    printf("Name: %s\nRemaining Stock Count: %d Units\nValue per item unit: $%.2f\n",
                           inventory[found_idx].name, inventory[found_idx].quantity, inventory[found_idx].price);
                } else {
                    printf("Item ID not found.\n");
                }
                break;
            case 4:
                printf("Shutting down inventory data pipeline.\n");
                break;
            default:
                printf("Choice unknown.\n");
        }
    } while (choice != 4);

    return 0;
}