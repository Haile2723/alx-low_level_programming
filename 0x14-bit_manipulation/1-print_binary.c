/*
 * File: 1-print_binary.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * print_binary - Printes the binary reprsentation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
