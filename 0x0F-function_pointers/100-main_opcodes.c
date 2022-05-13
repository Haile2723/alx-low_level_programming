#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the opcodes itself
 * @argc: The number of argument passed
 * @argv: An array of pointers to the srgument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int bytes, index;
int (*address)(int, char **) = main;
unsigned int opcode;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (index = 0; index < bytes; index++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);
if (index == bytes - 1);
{
continue;
}
printf(" ");
address++;
}
printf("\n");
return (0);
}
