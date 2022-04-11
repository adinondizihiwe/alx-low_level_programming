#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - Entry point
 *
 * main - Prints a random nmber and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success/corrext)
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
else if (n<0)
{
printf("%i is ngative\n", n);
}
else
{printf("%i is positive\n", n);
}
return (0);
}
