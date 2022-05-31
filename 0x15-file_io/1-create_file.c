/*
 * File: 1-create_file.c
 * Auth: Haile2723
 */
#include "main.h"
/**
 * create_file - Create a file
 * @filename: A pointer to the name of the file created.
 * @text_content: A pointer to a string written to the file created.
 * Return: If function fails - -1, Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
{
len++;
}
}
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, len);
if (o == -1 || w == -1)
{
return (-1);
}
close (o);
return (1);
}
