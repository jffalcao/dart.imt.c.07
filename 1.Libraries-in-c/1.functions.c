#include <stdio.h>

double square(double); //Prototype declaration header signature

int main(void)
{
    double a = 3.21;
    double aSquared = square(a);

    printf("\n%.2lf square is %.2lf\n\n", a, aSquared);
    return 0;
}

double square(double x)
{
    return x * x;
}
