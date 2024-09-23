#include <stdio.h>

int main()
{
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        flag = 0; // Numbers less than or equal to 1 are not prime
    }

    for (i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            flag = 0; // Number is not prime if divisible by any number other than 1 and itself
            break;
        }
    }

    if (flag)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
