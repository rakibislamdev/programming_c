#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Choosing operation
    printf("Enter '+' to add or '-' to subtract: ");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("Result: %d\n", num1 + num2);
    }
    else if (operation == '-')
    {
        printf("Result: %d\n", num1 - num2);
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}
