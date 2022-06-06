#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > c && b > a)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
