#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;  // Use 'unsigned long long' for large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        for (i = 1; i <= n; ++i)  // Start from 1 and go up to and including 'n'
        {
            factorial *= i;  // Compute the factorial
        }
        printf("Factorial of %d is %llu\n", n, factorial);  // Use %llu for unsigned long long
    }

    return 0;
}
