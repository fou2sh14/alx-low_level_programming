#include <stdio.h>

/**
 * main - print all arg
 *
 * @argc: number of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}

	return (0);
}
