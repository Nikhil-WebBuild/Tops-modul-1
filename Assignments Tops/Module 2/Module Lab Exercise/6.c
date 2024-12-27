#include <stdio.h>

int main() {
    int i;

    // Using a for loop
    printf("Using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop
    printf("Using while loop:\n");
    i = 1; // Initialize the counter
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using a do-while loop
    printf("Using do-while loop:\n");
    i = 1; // Reinitialize the counter
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}