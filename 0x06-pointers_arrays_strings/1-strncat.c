#include "main.h"

/**
 *  _strncat - concatenate two strings
 *
 * @n: number of characters in source string
 * @dest: destination string
 * @src: source string
 *
 * Return: new concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_1, index_2;

	/* find length of destination string */
	for (index_2 = 0; src[index_2] != '\0' && index_2 < n; index_2++)
	{
		dest[index_1 + index_2] = src[index_2]; /* concat strins */
	}


	dest[index_1 + index_2] = '\0'; /* add null character to concat strings */
	return (dest);
}
