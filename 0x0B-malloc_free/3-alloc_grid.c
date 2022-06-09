/*
 * File: 3-alloc_grid.c
 * Auth: Haile2723
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -Return a pointer to 2 dimensional array of integers.
 * @width: The width of 2 dimensional array.
 * @height: The height of 2 dimensional array.
 * Return: If width <= 0, height <= 0, or function fails - NULL.
 *         Otherwise - a pointer to the 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
int **twoD;
int hgt_index, wid_index;

if (width <= 0 || height <= 0)
return (NULL);

twoD = malloc(sizeof(int *) * height);

if (twoD == NULL)
return (NULL);

for (hgt_index = 0; hgt_index < height; hgt_index++)
{
twoD[hgt_index] = malloc(sizeof(int) * width);

if (twoD[hgt_index] == NULL)
{
for (; hgt_index >= 0; hgt_index--)
free(twoD[hgt_index]);

free(twoD);
return (NULL);
}
}

for (hgt_index = 0; hgt_index < height; hgt_index++)
{
for (wid_index = 0; wid_index < width; wid_index++)
twoD[hgt_index][wid_index] = 0;
}

return (twoD);
}