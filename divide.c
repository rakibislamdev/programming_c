#include <stdio.h>

int main()
{
    int dividend, divisor;

    // Input from user
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate remainder using the % operator
    int remainder = dividend % divisor;

    printf("Remainder: %d\n", remainder);

    return 0;
}
