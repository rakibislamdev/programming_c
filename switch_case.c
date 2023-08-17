#include <stdio.h>

int main()
{
    int day;

    printf("Enter your preferred day of the week (1-7): ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("You chose Monday. It's the start of the workweek.\n");
    }
    else if (day == 2)
    {
        printf("You chose Tuesday. The week is rolling along.\n");
    }
    else if (day == 3)
    {
        printf("You chose Wednesday. Midweek hump!\n");
    }
    else if (day == 4)
    {
        printf("You chose Thursday. The weekend is almost here.\n");
    }
    else if (day == 5)
    {
        printf("You chose Friday. TGIF! The weekend starts soon.\n");
    }
    else if (day == 6 || day == 7)
    {
        printf("You chose the weekend. Enjoy your rest!\n");
    }
    else
    {
        printf("Invalid choice. Please enter a number from 1 to 7.\n");
    }

    return 0;
}
