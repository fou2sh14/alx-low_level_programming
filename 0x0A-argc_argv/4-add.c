#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum all arg
 *
 * @argc: number of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0, f, g;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (g = 0; g < argc; g++)
	{
		if (!(atoi(argv[g]) >= 48 && atoi(argv[g] <= 57)))
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	for (f = 1; f < argc; f++)
	{
		s += atoi(argv[f]);
	}
	printf("%d\n", s);

	return (0);
}
