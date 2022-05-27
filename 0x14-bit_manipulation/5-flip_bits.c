/*
 * File: 5-flip_bits.c
 * Auth: Haile2723
 *
 */
#include "main.h"
/**
 * flip_bits - Count the no of bits needed to be flipped
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bit to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;
while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}
return (bits);
}
