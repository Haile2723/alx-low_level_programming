#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print multiplication of 2 integers, followed by new line.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointer to the arguments.
 * Return: 0 if the argument receives 2 arguments, 1 if not
 */
int main(int argc, char *argv[])
{
int num1, num2, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 * num2;
printf("%d\n", prod);
return (0);
}
