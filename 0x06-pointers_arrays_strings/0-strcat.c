#include "main.h"
/**
 * strcat - Concatenates the string pointed to @src
 * @dest: A pointer the string to be Concatenated
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dst, char *src)
{
int index = 0, int dest_len = 0;
while (dest[index++])
{
dest_len++;
}
for (index = 0; src[index]; index++)
{
dest[dest_len++] = src[index];
}
return (dest);
}
