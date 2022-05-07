#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: a pointer to a memory previously allocated
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of new memory block.
 * Return: If new_size == old_size - ptr
 *         If new_size == 0 and ptr is not NULL - NULL
 *         Otherwise - a pointer to the reallocated memory block.
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
