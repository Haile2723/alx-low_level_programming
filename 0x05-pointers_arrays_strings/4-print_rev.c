#include "main.h"
/**
 * print_rev - Print the string in reverse
 * @s: The string t be printed
 */
void print_rev(char *s)
{
int len = 0, index;
while (s[index++])
{
len++;
}
for (index = len - 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
