#include "main.h"
/**
 * palindromeChecker - Check the string
 * @str: The string to be checked
 * @len: The length of the string
 * @i: The incrimentor, starts at 0
 * Return: 1 if it is palindrome, 0 if not
 */
int palindromeChecker(char *str, int len, int i)
{
if (i  < len && str[i] == str[len])
{
return (palindromeChecker(str, len - 1, i + 1));
}
if (str[i] != str[len])
{
return (0);
}
return (1);
}

/**
 * _strlen_recursion - returns the length of the string
 * @s: The string to check the length of
 * Return: An integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}

/**
 * is_palindrome - Check to see if a string is palindrome
 * @s: The string to vheck
 * Return: 1 if it is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int i = 0;
int length = _strlen_recursion(s) - 1;
return (palindromeChecker(s, length, i));
}
