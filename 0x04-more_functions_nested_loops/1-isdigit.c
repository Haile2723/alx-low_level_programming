#include "main.h"
/**
 *_isdigit - Check whether a character is a digit or not
 *@c: The character to be checked
 *Return: 1 if a character is digit, 0 otherwise
 */
int _isdigit(int c);
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
