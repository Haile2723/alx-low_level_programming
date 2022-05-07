#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - Reallocate memory size function.
 * @ptr: a pointer to a memory previously allocated.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The new size of new memory block.
 * Return: pointer to array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *y;
if (new_size > old_size)
{
y = malloc(new_size);
free(ptr);
return (y);
}
if (new_size == old_size)
{
return (ptr);
}
if(ptr == NULL)
{
y = malloc(new_size);
free(ptr);
return (y);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
