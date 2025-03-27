// Your code here...
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {  // Run the loop t times
        int num;
        scanf("%d", &num);  // Read the number to check
        printf("%d\n", isPrime(num));  // Call isPrime() and print the result
    }
    
    return 0;
}
