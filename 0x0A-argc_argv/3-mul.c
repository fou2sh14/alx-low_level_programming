#include <stdio.h>

/**
 * main - print multiply of 2 arg
 *
 * @argc: number of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
