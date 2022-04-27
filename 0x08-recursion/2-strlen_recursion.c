#include "main.h"
/**
 * _strlen_recursion - return the length of the string
 * @s: The string to check the length of
 * Return: an integer that display the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
