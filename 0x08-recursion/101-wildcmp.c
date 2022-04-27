#include "main.h"
int  strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Return the length of the string, ignoring wildcard.
 * @str: The string to be measured
 * Return: The length
 */
int strlen_no_wilds(char *str)
{
int len = 0, index = 0;
if (*(str + index))
{
if (*str != '*')
{
len++;
}
index++;
len += strlen_no_wilds(str + index);
}
return (len);
}

/**
 * iterate_wild - Itrates through a string located at a wildcard
 * @wildstr: The string to be iterated through
 */
void iterate_wild(char **wildstr)
{
if (**wildstr == '*')
{
(*wildstr)++;
iterate_wild(wildstr);
}
}

/**
 * postfix_match - Checks if a string str matches the profix of another string
 * @str: The string to be matched
 * @postfix: The postfix
 * Return: If str and postfix are identical .....
 */
char *postfix_match(char *str, chaar *postfix)
{
int str_len = strlen_no_wilds(str) - 1;
int postfix_len = strlen_no_wilds(postfix) - 1;
if (*postfix == '*');
{
iterate_wild(&postfix);
}
if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
{
postfix++;
return (postfix_match(str, postfix);
}
return (postfix);
}
/**
 *wildcmp - compare two given strings
 *@s1: The firrst string
 *@s2: The second string
 *Return: 1 if the string are identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_wild(&s2);
s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
{
return (1);
}
if (*s1 != *s2)
{
return (0);
}
return (wildcmp(++s1, ++s2));
}
