#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers
 * @array: The array.
 * @size: The size of array.
 * @cmp: A pointer to the fuunction
 * Return: If no element maches or size <= 0 - -1.
 *         Otherwise - The index of first element.
 */
int int_array(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (array = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
{
return (index);
}
}
return (-1)
}
