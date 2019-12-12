#include <stdio.h>

double averageTemp(double *temp, int numOfTemps);

int main(int argc, char const *argv[])
{
    double temperatures[7]= {6.9, 12.3, 9.0, 5.3, 9.8, 1.8, 0.3};
    double average = averageTemp(temperatures, 7);
    printf("Average 7-day temp: %.2lf\n\n", average);
    return 0;
}

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
