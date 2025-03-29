#include <stdio.h>

// Recursive function for Fibonacci series
int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);  // Read input

    if (n < 0) {
        printf("Invalid input\n");
        return 1;  // Exit the program if input is invalid
    }

    // Print Fibonacci series
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    
    printf("\n"); // New line after output
    return 0;
}





