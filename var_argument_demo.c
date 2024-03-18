#include <stdio.h>
#include <stdarg.h>

// Variadic function to calculate the sum of integers
int sum(int count, ...) {
    va_list args;               // Declare a va_list to hold the variable arguments
    int total = 0;              // Initialize total to 0
    va_start(args, count);      // Initialize the va_list

    // Loop through each argument using va_arg macro
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);    // Add each argument to total
    }

    va_end(args);               // Clean up the va_list
    return total;               // Return the sum
}

int main() {
    // Call the sum function with different numbers of arguments
    int result1 = sum(3, 5, 3, 7);
    int result2 = sum(4, 10, 1, 2, 3);

    // Print the results
    printf("Sum (5, 3, 7): %d\n", result1);
    printf("Sum (10, 1, 2, 3): %d\n", result2);

    return 0;
}