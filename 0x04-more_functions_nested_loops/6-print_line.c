#include "main.h"
/**
 *print_line - print a straight line in the terminal
 *@n: The number character to be printed
 */
void print_line(int n)
{
int x;
if (n > 0)
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
}
_putchar('\n');
}
