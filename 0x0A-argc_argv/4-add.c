#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: pointer string vector for argc
 *
 * Return: sum, 0 if no arg provided, error if one string in int arg
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *err;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &err, 10);
		if (*err)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
