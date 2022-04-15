#include "main.h"
/**
 *more_numbers - Print x10 numbers from 0 - 14
 */
void more_numbers(void)
{
int num, count;
for (count = 1; count  <= 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
