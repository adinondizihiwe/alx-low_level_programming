#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is Zero\n", n);
}
else if (n < 0)
{
printf("%i is ngative\n", n);
}
else
{
printf("%i is positive\n", n);
}
return (0);
}
