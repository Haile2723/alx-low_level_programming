#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string to check
 * @c: The character we are loking for
 * Return: a pointer to the first occurence of the checker @c
 * @s: Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
