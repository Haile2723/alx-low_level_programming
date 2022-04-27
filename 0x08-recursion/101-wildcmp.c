#include "main.h"

/**
 *wildcmp - compare two given strings
 *@s1: The firrst string
 *@s2: The second string
 *Return: The difference between string
 */
int wildcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
