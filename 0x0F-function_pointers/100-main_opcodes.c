#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: first input
 *
 * @argv: second one
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *point = (char *)main;
	int f;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	f = atoi(argv[1]);
	if (f < 0)
	{
		printf("Error\n"), exit(2);
	}
	while (f--)
	{
		printf("%02hhx%s", *point++, f ? " " : "\n");
	}
	return (0);
}
