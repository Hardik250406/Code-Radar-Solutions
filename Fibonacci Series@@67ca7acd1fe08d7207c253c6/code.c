#include <stdio.h>

// Recursive function for Fibonacci series
int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    
}


    // Print Fibonacci series
    
    printf("\n"); // New line after output
    return 0;






