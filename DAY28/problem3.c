#include <stdio.h>

#define TOTAL_SEATS 10

int main() {
    int seats[TOTAL_SEATS] = {0}; // 0=Available, 1=Booked
    int choice,seat_num;

    do {
        printf("\n--- Theater Ticket Booking Dashboard ---\n");
        printf("1. View Seat Map status\n");
        printf("2. Reserve a Seat ($15.00)\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter selection:");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("\n--- Seating Chart Status ---\n");
                for (int i=0; i < TOTAL_SEATS; i++) {
                    printf("[Seat %d: %s]  ", i + 1, (seats[i] == 1) ? "RESERVED" : "AVAILABLE");
                    if ((i + 1) % 2 == 0) printf("\n");
                }
                break;
            case 2:
                printf("Select a seat number (1-10):");
                scanf("%d",&seat_num);
                if (seat_num >= 1 && seat_num <= TOTAL_SEATS) {
                    if (seats[seat_num - 1] == 0) {
                        seats[seat_num - 1] = 1;
                        printf("Seat %d securely booked. Please prepare $15.00 payment at window.\n", seat_num);
                    } else {
                        printf("Error: Seat already occupied!\n");
                    }
                } else {
                    printf("Invalid seat assignment!\n");
                }
                break;
            case 3:
                printf("Enter seat number to cancel reservation (1-10):");
                scanf("%d",&seat_num);
                if (seat_num >= 1 && seat_num <= TOTAL_SEATS) {
                    if (seats[seat_num - 1] == 1) {
                        seats[seat_num - 1] = 0;
                        printf("Reservation removed. Seat %d is open.\n",seat_num);
                    } else {
                        printf("This seat is already completely unreserved.\n");
                    }
                }
                break;
            case 4:
                printf("Closing Box Office booking console.\n");
                break;
            default:
                printf("Option unknown.\n");
        }
    } while (choice != 4);

    return 0;
}