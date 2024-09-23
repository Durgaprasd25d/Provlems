#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int num1, num2, result;


    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Function call to add numbers
    result = add(num1, num2);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Return 
}
