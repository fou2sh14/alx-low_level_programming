#include "main.h"

/**
 * print_diagsums - sum the values of diagonal
 *
 * @a: first input
 *
 * @size: second input
 */

void print_diagsums(int *a, int size)
{
	int f, summ1 = 0, summ2 = 0;

	for (f = 0; f < size; f++)
	{
		summ1 = summ1 + a[f];
		summ2 = summ2 + a[size - f - 1];
		a = a + size;
	}
	printf("%d, ", summ1);
	printf("%d\n", summ2);
}
