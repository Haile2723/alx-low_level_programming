/*
 * File: 1-strncat.c
 * Auth: Haile2723
 */

#include "main.h"

/**
 * _strncat - Concatenates 2 sttrings using at most an inputted no. of bytes
 * @dest: The string to e appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
