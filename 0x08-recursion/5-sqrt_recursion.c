#include "main.h"
/**
 *helper - Find the square root of two numbers
 *@a: The number
 *@b: The number to test the square root of @a
 *Return: Square root
 */
int helper(int a, int b)
{
if ((b * b) > a)
{
return (-1);
}
else if ((b * b) == a)
{
return (b);
}
else
{
return (helper(a, b + 1));
}
}
/**
 * _sqrt_recursion - Return the natural aquare root of a number
 * @n: The number to return the square root of
 * Return: The square root @n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (helper(n, 1));
}
