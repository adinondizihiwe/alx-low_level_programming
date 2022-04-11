#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabets backwards
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');
return (0);
}
