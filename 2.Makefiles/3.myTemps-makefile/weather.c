#include <stdio.h>

double averageTemp(double *temps, int numOfTemps)
{
    double result = 0.0;

    for (int i = 0; i < numOfTemps; i++)
    {
        result += temps[i];
    }

    result = result / (double) numOfTemps;
    return result;    
}

void printAverageTemp(double *temps, int numOfTemps)
{
    double average = averageTemp(temps, numOfTemps);
    printf("The average temperature for the last %d days is: %.2lf\n\n", numOfTemps, average);    
}