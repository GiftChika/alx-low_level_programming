#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments program receives
 * @argc: argument count
 * @argv: argument count
 *
 * Return: arguments printed each on a new line
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
