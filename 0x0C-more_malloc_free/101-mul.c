#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * find_len - find the length of string
 * @str: The string to be measured
 */
int find_len(chat *str)
{
int len = 0;
while(*str++)
{
len++
}
return (len);
}

/**
 * create_xarray - Create an array of chars and initializes it with x
 * @size: the size of the array to be initialized
 * Description: If there is insufficient space,the function exit with status 98
 * Return: A pointer to the array
 */
char *create_xarray(int size)
{
char *array;
int index;
array = malloc(sizeof(char) * size);
if (array == NULL)
{
exit(98);
}
for (index = 0; index < (size - 1); index++)
{
array[index] = 'x';
}
array[index] = '\0';
return (array);
}

/**
 * iterate_zeroes - Iterate through a string of number containing leading zeros
 * @str: The string to be iterate through
 * Return: A pointer to the next non zero element
 */
char *iterate_zeroes(char *str)
{
while (*str && *str == '0')
{
str++
}
return (str);
}
/**
 * get_digit - Converts a digit character to corresponding int
 * @c: The character to be converted
 * Description: If c is non digit, the function exit with status 98
 * Return: The converted int
 */
int get_digit(char c)
{
	int digit = c - '0';
	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);





