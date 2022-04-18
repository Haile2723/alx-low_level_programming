#include "main.h"
/**
 * _strlen - Return the length of string
 * @s: The string to get the length
 * Return: The length of @s
 */
size_t _strlen(const char *s)
{
size_t len = 0;
while (*s++)
{
len++;
}
return (len);
}
