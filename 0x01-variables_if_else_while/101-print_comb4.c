#include <stdio.h>

/**
 *main - Print all posible combinations of 3 digits
 *Return: Always 0.
 */
int main(void)
{
int a, b, c;
for (a = 0; a < 9; a++)
{
for (b = a + 1; b < 10; b++)
{
for (c = b + 1; c < 11; c++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');
if (a == 7 && b == 8 && c == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
