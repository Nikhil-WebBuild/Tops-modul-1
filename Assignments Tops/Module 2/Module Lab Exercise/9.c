#include <stdio.h>

void handleOneDimensionalArray() {
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void handleTwoDimensionalArray() {
    int arr[3][3];
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements of the 3x3 matrix are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sumTwoDimensionalArray() {
    int arr[3][3];
    int sum = 0;
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);
}

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Handle a one-dimensional array\n");
    printf("2. Handle a two-dimensional array (3x3 matrix)\n");
    printf("3. Sum the elements of a two-dimensional array (3x3 matrix)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            handleOneDimensionalArray();
            break;
        case 2:
            handleTwoDimensionalArray();
            break;
        case 3:
            sumTwoDimensionalArray();
            break;
        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
    }

    return 0;
}