#include <stdio.h>

int main() {
    int n1, i;
    printf("Enter the numerical value of N1: ");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++) {
        if (i == 3) {
            continue;
        }
        printf("\n%d", i);
        if (i == 5) {
            break; 
        }
    }

    return 0;
}