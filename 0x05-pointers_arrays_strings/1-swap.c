#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: The 1st integer to be swapped
 * @b: The 2nd integer to be swapped
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a  = *b;
*b = *tmp;
}
