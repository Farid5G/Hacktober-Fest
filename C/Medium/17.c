// 24) Fibonacci Series Using Recursion (Fill in the Blank)
#include <stdio.h>

// Function to calculate Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return ___;  // Fill in the blank
    else if (n == 1)
        return ___;  // Fill in the blank
    else
        return fibonacci(n - 1) + fibonacci(___);  // Fill in the blank
}
int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
