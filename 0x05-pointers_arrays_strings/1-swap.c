#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: takes first input
 *
 * @b: takes second input
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
