#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create pointer to a 2d array of ints
 *
 * @height: height or row
 * @width: width or column
 *
 * Return: 2D array or NULL if failed to allocate memory
 */
int **alloc_grid(int width, int height)
{
