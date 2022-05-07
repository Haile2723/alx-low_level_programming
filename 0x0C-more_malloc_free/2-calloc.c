#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array of a certain number of elements...
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: If numb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
x = malloc(nmemb * size);
if (x == NULL)
{
return (NULL);
}
for (i = 0; i < (size * nmemb); i++)
{
x[i] = '\0';
}
return (x);
}
