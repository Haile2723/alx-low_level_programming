/*
 * File: 0-create_array.c
 * Auth: Haile2723
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it with specific char
 * @size: The size of the array to be intialized.
 * @c: The specific char to initialize the array with
 * Return: If size == 0 or the function fails - NULL.
 *          Otherwise a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
