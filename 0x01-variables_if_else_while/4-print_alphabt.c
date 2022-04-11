#include <stdio.h>
/**
 * Main -Entry point
 *
 * Description: Print lowercase alphabet excluding e and q
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
 if (c != 'c' && c != 'q')
 putchar(c);
 }

return (0);
}
		
