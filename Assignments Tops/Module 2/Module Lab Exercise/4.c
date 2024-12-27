/*Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them.
 Display the results*/
#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2;

    // Prompt the user for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Arithmetic Operations
    printf("\nArithmetic Operations:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);

    // Relational Operations
    printf("\nRelational Operations:\n");
    printf("%d == %d: %d\n", num1, num2, num1 == num2);  // Equal to
    printf("%d != %d: %d\n", num1, num2, num1 != num2);  // Not equal to
    printf("%d > %d: %d\n", num1, num2, num1 > num2);    // Greater than
    printf("%d < %d: %d\n", num1, num2, num1 < num2);    // Less than
    printf("%d >= %d: %d\n", num1, num2, num1 >= num2);  // Greater than or equal to
    printf("%d <= %d: %d\n", num1, num2, num1 <= num2);  // Less than or equal to

    // Logical Operations
    printf("\nLogical Operations:\n");
    printf("num1 > 0 && num2 > 0: %d\n", num1 > 0 && num2 > 0);  // Logical AND
    printf("num1 > 0 || num2 > 0: %d\n", num1 > 0 || num2 > 0);  // Logical OR
    printf("!(num1 > 0): %d\n", !(num1 > 0));                    // Logical NOT

    return 0;
}
