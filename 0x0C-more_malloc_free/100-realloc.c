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
void *n;
char *ptr_copy, *y;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if(ptr == NULL)
{
n = malloc(new_size);
if (n == NULL)
{
return (NULL);
}
return (n);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr_copy = ptr;
n = malloc(sizeof(*ptr_copy) * new_size);
if (n == NULL)
{
free(ptr);
return (NULL)
}
y = n;
for (i = 0; i < old_size && i < new_size; i++)
{
y[i] = *ptr_copy++;
}
free(ptr);
return (n);
}
