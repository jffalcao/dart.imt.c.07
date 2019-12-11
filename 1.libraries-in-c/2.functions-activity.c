#include <stdio.h>

double ftoc(int);
double ctof(int);

int main(void)
{

    int userTemp = 0;
    char unit = 'C';
    double convertedTemp = 0;


    printf("\nEnter the temp followed by a space and the unit (C/F): ");
    scanf("%i %c", &userTemp, &unit);

    switch (unit)
    {      
    case 'F':
    case 'f':
        convertedTemp = ftoc(userTemp);
        printf("%d Farenheit is %f Celcius\n\n", userTemp, convertedTemp);
        break;

    case 'C':
    case 'c':
        convertedTemp = ctof(userTemp);
        printf("%d Celcius is %f Fareinheit\n\n", userTemp, convertedTemp);
        break;
    
    default:
        printf("Wrong Unit only C or F are valid\n\n");
        break;
    }
}

double ctof(int x)
{
    return (9.0 / 5) * x + 32;
}

double ftoc(int x)
{
    return (5.0 / 9) * (x - 32);
}
