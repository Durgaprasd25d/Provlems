#include <stdio.h>

int main()
{
    int num, i;
    int first = 0, second = 1, next;

    printf("Enter the number: ");
    scanf("%d", &num); // Use &num to store the input value

    printf("Fibonacci sequence: ");
    for (i = 0; i < num; i++)
    {
        if (i == 0)
        {
            next = first; // First Fibonacci number
        }
        else if (i == 1)
        {
            next = second; // Second Fibonacci number
        }
        else
        {
            next = first + second; // Compute the next number in the sequence
            first = second;        // Update first
            second = next;         // Update second
        }
        printf("%d ", next); // Print the current Fibonacci number
    }

    printf("\n"); // Print a newline character for better output formatting

    return 0;
}
