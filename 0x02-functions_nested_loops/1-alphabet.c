
0;276;0c#include "main.h"

/**
 *File: main.h
 *Retur: Always 0.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
