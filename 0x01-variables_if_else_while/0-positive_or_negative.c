#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to n and prints whether it is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("The number is zero\n");
    }

    return (0);
}
