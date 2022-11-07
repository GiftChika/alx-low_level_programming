#include <stdio.h>
#include <stdlib.h>

/**
 * main - count number of arguments in a program
 * @argc: argument count
 * @argv: string vector of argument
 *
 * Return: integer value of arguments
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
