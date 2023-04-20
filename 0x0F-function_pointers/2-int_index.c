#include "function_pointers.h"

/**
 * int_index - function search
 *
 * @array: the array
 *
 * @size: the length
 *
 * @cmp: function pointer
 *
 * Return: element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int f = 0;

	if (array && size && cmp)
	{
		while (f < size)
		{
			if (cmp(array[f]))
			{
				return (f);
			}
			f++;
		}
	}
	return (-1);
}
