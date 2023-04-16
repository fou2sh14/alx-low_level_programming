#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins needed
 *
 * @argc: number of arg
 *
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int f, sum = 0, input = atoi(argv[1]);

		int arr[] = {25, 10, 5, 2, 1};

		for (f = 0; f < 5; f++)
		{
			if (input >= arr[f])
			{
				sum += input / arr[f];

				input %= arr[f];

				if (input % arr[f] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
