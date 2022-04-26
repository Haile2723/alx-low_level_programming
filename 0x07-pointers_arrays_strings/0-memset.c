#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: A pointer to the memory area to fill.
 * @b: Constant byte.
 * @n: The number of bytes to fill.
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
