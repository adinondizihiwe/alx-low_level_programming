#include "main.h"

/**
 * _strlen - length of a string
 * @s: A point to an int that will be changed/updated
 *
 * Return: void that means our answer is right
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

