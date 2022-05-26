/*
 * File: 2-get_bit.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: The bit
 * @index: The index of the bit
 * Return: If an error occurs - -1, Otherwise the value of bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
if ((n & (1 << index)) == 0)
{
return (0);
}
return (1);
}
