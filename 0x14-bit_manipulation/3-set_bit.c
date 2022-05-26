/*
 * File: 3-set_bit.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * set_bit - set a value of bit to 1 at a given index.
 * @n: A pointer to the bit
 * @index: The index of the bit to set at - start at 0.
 * Return: If any error occures - -1, Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n ^= (1 << index);
return (1);
}
