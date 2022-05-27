/*
 * File: 100-get_endianness.c
 * Auth: Haile2723
 */
#include "main.h"

/**
 * get_endianness - Check the endianness.
 * Return: 0 - If big endian, 1 - little endian
 */
int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;
if (*endian == 1)
{
return (1);
}
return (0);
}
