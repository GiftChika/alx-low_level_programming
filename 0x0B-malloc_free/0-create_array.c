#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an arry of chars
 * @c: character to print
 * @size: size of memory to print
 *
 * Return: pointer to the array or NULL if it fails or n is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
