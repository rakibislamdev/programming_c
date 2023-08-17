#include <stdio.h>

int main()
{
    char character;

    // Input from user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is an alphabet
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        // Convert the character to lowercase for easier comparison
        char lowercaseChar = tolower(character);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u')
        {
            printf("The character '%c' is a vowel.\n", character);
        }
        else
        {
            printf("The character '%c' is a consonant.\n", character);
        }
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
