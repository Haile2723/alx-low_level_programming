#include <string.h>
#include "main.h"
/**
 *wildcmp - compare two given strings
 *@s1: The firrst string
 *@s2: The second string
 *Return: The difference between string
 */
int wildcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0' && s2[i] == '\0')
{
break;
}
i++;
}
return (s1[i] - s2[i]);
}
