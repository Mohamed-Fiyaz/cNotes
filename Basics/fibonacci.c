// fibonacci
#include <stdio.h>
// Function to generate Fibonacci series
void fibonacciSeries(int n) {
    int fib[n]; // Array to store Fibonacci numbers

    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    // Generate Fibonacci numbers from the third number onwards
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms must be greater than zero.\n");
    } else {
        fibonacciSeries(terms);
    }

    return 0;
}