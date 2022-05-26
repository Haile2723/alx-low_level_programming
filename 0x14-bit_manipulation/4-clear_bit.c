/*
 * File: 4-clear_bit.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * clear_bit - Sets the value of the bit to 0 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at.
 * Return: If any error occurs - -1, otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
