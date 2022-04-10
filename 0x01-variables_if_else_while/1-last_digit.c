#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Print a number and it's last digit along with whether its
 * last digit is 0, greater than, or less than 0.
 * Return: 0
 */
int main(void)
{
int n;

$rand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of Id is %d %s\n", n, % 10,
((n % 10) == 0) ? "and is 0"
: "(((n % 10) > 5) ? "and is greater that 5"
: "and is less than 6 and not 0"));

return (0);

