#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * new string should contain s1 and s2 and be null terminated
 * if NULL is passed, treat as an empty string
 * @s1: string destination
 * @s2: string source
 *
 * Return: concatenated string or NULLon failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len_s1, len_s2, len_cat, i, j;

	len_s1 = len_s2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len_s1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
	}
	len_cat = len_s1 + len_s2;

	new_str = (char *)malloc(sizeof(char) * (len_cat + 1));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		new_str[i] = s2[j];
	new_str[len_cat] = '\0';
	return (new_str);
}
