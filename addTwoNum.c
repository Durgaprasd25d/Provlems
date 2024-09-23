#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int num1, num2, result;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);  // Read the first number

    printf("Enter the second number: ");
    scanf("%d", &num2);  // Read the second number

    // Function call to add numbers
    result = add(num1, num2);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Return the sum of a and b
}
