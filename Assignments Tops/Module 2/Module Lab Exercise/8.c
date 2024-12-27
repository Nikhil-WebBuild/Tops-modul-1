#include <stdio.h>

// Function to calculate factorial
int fact(int n1) {
    int i, fact = 1;
    for (i = 1; i <= n1; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n1, ans;
    printf("Enter your numerical value for N1: ");
    scanf("%d", &n1);
    ans = fact(n1);
    printf("\n%d factorial is: %d\n", n1, ans);
    return 0;
}