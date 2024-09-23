#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int length;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);
    printf("Length is %d\n", length);

    printf("Reversed word: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}