#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints multiplication of two integers, followed by new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If the argument receives two arguments - 0, Otherwise - 1.
 */
int main(int argc, char *argv[])
{
int num1, num2;
int mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
return (0);
}
