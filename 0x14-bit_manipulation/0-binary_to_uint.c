/*
 * File: 0-binary_to_uint.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * binary_to_uint - Convert a binary number to unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains char not 0 and 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0, mult = 1;
int len;
if (b == '\0')
{
return (0);
}
for (len = 0; b[len];)
{
len++;
}
for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
num += (b[len] - '0') * mult;
mult *= 2;
}
return (num);
}
