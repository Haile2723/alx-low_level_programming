/*
 * File: 7-leet.c
 * Auth: Haile2723
 */

#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int indx1 = 0, indx2;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[indx])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (str[index] == leet[indx2] || str[indx1] - 32 == leet[indx2])
str[indx1] = indx2 + '0';
}

indx1++;
}

return (str);
}
