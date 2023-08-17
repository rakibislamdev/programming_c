#include <stdio.h>
#include <math.h>

int main()
{
    double num = -5.7;
    int integer = -10;

    printf("Ceil: %.2f\n", ceil(num));
    printf("Floor: %.2f\n", floor(num));
    printf("Round: %.2f\n", round(num));
    printf("Exponential: %.2f\n", exp(num));
    printf("Power: %.2f\n", pow(2.0, 3.0));
    printf("Absolute Value: %d\n", abs(integer));

    return 0;
}
