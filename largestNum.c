#include <stdio.h> // Use stdio.h for input-output operations

int main()
{
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Read three integers from user input

    // Print the entered numbers
    printf("You entered: %d %d %d\n", num1, num2, num3); // Display the numbers

    // Determine and print the largest number
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The largest number is %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is %d\n", num2);
    }
    else
    {
        printf("The largest number is %d\n", num3);
    }

    return 0; // Return 0 to indicate successful execution
}
