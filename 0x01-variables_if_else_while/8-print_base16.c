#include <stdio.h>

/**
 *main - Print base 16 numbers
 *Return: Always 0.
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
{
putchar("%d", num);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
