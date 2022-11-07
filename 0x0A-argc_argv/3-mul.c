#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argv: string vector of argc
 * @argc: argument count
 *
 * Return: value of multiplication or error and 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
