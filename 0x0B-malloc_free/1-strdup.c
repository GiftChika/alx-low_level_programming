#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate of str. NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len_str = 0;

	if (str == NULL)
		return (NULL);

	while (str[len_str] != '\0')
	{
		len_str++;
	}

	/**
	 * set memory size for duplicate string
	 * +1 accounts for null terminating character
	 */
	dup_str = (char *)malloc((sizeof(char) * len_str) + 1);

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len_str] = '\0';

	return (dup_str);
}
