#include "main.h"
/**
 * print_re - print a string in reverse order
 * @s: A pointer to an int that will be changed
 *
 * Return: void which meas our answe is correct
 */

void print_rev(char *s)
{int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = 1 - 1 ; i >= 0; i--)
{
_putchar (s[i]);
}

_putchar ('\n');
