#include "main.h"
/**
 * factorial - returns the factorial of the given number
 * @n: The number to find the factorial of
 * Return: The factorial of @n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
