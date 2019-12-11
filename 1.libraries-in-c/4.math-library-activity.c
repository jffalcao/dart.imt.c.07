#include <stdio.h>
#include <math.h>

int main()
{
    int userInput = 0;
    double rootUserInput = 0.0;

    printf("\nEnter an integer: ");
    scanf("%i", &userInput);
    rootUserInput = sqrt(userInput);
    printf("\nSquare root of %d is %.8lf\n", userInput, rootUserInput);
    printf("e = %.10lf\n\n", exp(1.0));


    return 0;
}
