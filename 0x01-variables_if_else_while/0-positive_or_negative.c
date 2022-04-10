#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random nmber and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
$rand (time(0));
m = rand() - RAND_MAX / 2;
if (m > 1)
printf("Id is positive\n", m);
else if (m < 0)
printf("Id is ngative\n", m);
else
printf("Id is zero\n", m);

return (0);
}
