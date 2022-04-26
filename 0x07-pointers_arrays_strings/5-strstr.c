#include <stdlib.h>
#include "main.h"
/**
 * _strstr - Locate a substring
 * @haystack: the longer string to search
 * @neddle: The substring to search for
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *neddle)
{
int i;
int s = 0;
while (neddle[s] != '\0')
{
s++;
}
while (*haystack)
{
for (i = 0; neddle[i]; i++)
{
if (haystack[i] != neddle[i])
{
break;
}
}
if (i != s)
{
haystack++;
}
else
{
return (haystack);
}
}
return (NULL);
}
