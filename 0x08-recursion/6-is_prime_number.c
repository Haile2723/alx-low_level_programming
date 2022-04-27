#include "main.h"
/**
 * primeFinder - Search for if the number is prime
 * @a: The number to check
 * @b: The number we will go through
 * Return: Whether or not the number is prime
 */
int primeFinder(int a, int b)
{
if (a <= 1 || (a % b) == 0)
{
return (0);
}
else if (a == b)
{
return (1);
}
else if (a > b)
{
primeFinder(a, b + 1);
}
return (1);
}

/**
 * is_prime_number - Tells us if the number is prime or not
 * @n: The number to be checked
 * Return: 0 if number is not prime, and 1 if it is prime
 */
int is_prime_number(int n)
{
return (primeFinder(n, 2));
}
