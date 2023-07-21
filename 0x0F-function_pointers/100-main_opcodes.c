#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: numbers of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byte, f;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (f = 0; f < byte; f++)
	{
		if (f == byte - 1)
		{
			printf("%02hhx\n", array[f]);
			break;
		}
		printf("%02hhx ", array[f]);
	}
	return (0);
}
