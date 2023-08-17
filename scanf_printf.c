

#include <stdio.h>

int main()
{
    // scanf : scanf is used to read formatted data from the standard input(usually the keyboard) and store it in variables.It takes format specifiers as arguments to interpret and read the data correctly.It returns the number of successfully read items.Syntax : scanf(format, address_of_variables);
    // Example:
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); // Read an integer from user input
    printf("You entered: %d\n", num);
    return 0;
}