#include "main.h"
/**
 * _strlen - Return the length of string
 * @s: The string to get the length
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
