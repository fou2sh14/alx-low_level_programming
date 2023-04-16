#include <stdio.h>

/**
 * main - print number of arg
 *
 * @argc: number of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
