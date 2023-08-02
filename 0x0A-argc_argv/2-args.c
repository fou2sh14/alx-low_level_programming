#include <stdio.h>

/**
 * main - main function
 *
 * @argc: number of args
 *
 * @argv: array of args
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
