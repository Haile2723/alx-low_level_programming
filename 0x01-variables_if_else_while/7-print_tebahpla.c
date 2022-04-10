#include <stdio.h>

/**
 *main - Print alphabets in reverse order.
 *Return: Always 0.
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
