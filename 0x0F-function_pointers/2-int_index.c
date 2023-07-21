#include "function_pointers.h"

/**
 * int_index - function
 *
 * @array: the array
 *
 * @size: the length
 *
 * @cmp: function pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int f = 0;

	if (array && size && cmp)
	{
		while (f < size)
		{
			if (cmp(array[f]))
				return (f);
			f++;
		}
	}
	else
	{
		return (-1);
	}
}
