#include <stdio.h>

int main(int argc, char const *argv[])
{
    int incrementFirst = 0;
    int incrementLast = 0;

    printf("\n\n******************* Start *******************\n\n");
    
    for (int i = 0; i < 10; i++)
    {

        printf("First: %d += %d is ", incrementFirst, i);
        incrementFirst += i;
        printf("%d\t", incrementFirst);

        printf("Last: %d =+ %d is ", incrementLast, i);
        incrementLast =+ i;
        printf("%d\n", incrementLast);

    }
    printf("\n\n******************* Finish *******************\n\n");
     
    return 0;
}
