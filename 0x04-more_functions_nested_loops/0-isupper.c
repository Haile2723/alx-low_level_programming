#include "main.h"
/**
 *_isupper - Check weather the character is upper case or lowercase
 *@c: the letter to be checked.
 *Return: 1 if upper case, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
