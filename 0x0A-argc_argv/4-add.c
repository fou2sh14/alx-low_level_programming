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
	int s = 0;
	char *point;

	while (--argc)
	{
		for (point = argv[argc]; *point; point++)
		{
			if (*point < 48 || *point > 57)
			{
				return (printf("Error\n"), 1);
			}
		}
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);

	return (0);
}
