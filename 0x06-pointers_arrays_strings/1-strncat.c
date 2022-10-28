#include "main.h"

/**
 *  _strncat - concatenate two strings
 *
 * @n: number of characters in source string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
