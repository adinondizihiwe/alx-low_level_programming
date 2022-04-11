#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Priny the lowercase  alphabet
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

putchar('\n');

return(0);
}
