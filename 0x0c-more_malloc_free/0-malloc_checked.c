#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: The number of byte to be allocated.
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
{
exit(98);
}
return (mem);
}
