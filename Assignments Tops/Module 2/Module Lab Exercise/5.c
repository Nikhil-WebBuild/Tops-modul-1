#include <stdio.h>

int main() {
    int choice, num, month;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Check if a number is even or odd\n");
        printf("2. Display the month name\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check if the number is even or odd using if-else
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0) {
                    printf("%d is even.\n", num);
                } else {
                    printf("%d is odd.\n", num);
                }
                break;

            case 2:
                // Get the month number from the user
                printf("Enter a month number (1-12): ");
                scanf("%d", &month);

                // Display the month name using a switch statement
                switch (month) {
                    case 1:
                        printf("January\n");
                        break;
                    case 2:
                        printf("February\n");
                        break;
                    case 3:
                        printf("March\n");
                        break;
                    case 4:
                        printf("April\n");
                        break;
                    case 5:
                        printf("May\n");
                        break;
                    case 6:
                        printf("June\n");
                        break;
                    case 7:
                        printf("July\n");
                        break;
                    case 8:
                        printf("August\n");
                        break;
                    case 9:
                        printf("September\n");
                        break;
                    case 10:
                        printf("October\n");
                        break;
                    case 11:
                        printf("November\n");
                        break;
                    case 12:
                        printf("December\n");
                        break;
                    default:
                        printf("Invalid month number. Please enter a number between 1 and 12.\n");
                }
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }

        // Ask the user if they want to continue
        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}