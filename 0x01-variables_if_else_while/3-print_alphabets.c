#include <stdio.h>
/**
 * Main - Entry point
 * Return 0 (Success/correct)
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
{
putchar('a' +  c);
}
for (c = 0; c < 26; ++c)
{
putchar('A' + c);
}
putchar('\n');

return (0);
}
