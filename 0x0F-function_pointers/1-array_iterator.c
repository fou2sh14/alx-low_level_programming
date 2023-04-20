#include "function_pointers.h"

/**
 * array-iterator - function call function
 *
 * @array: the array
 *
 * @size: the length
 *
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *f = array + (size - 1);

	if (array && size && action)
	{
		while (array <= f)
		{
			action(*array++);
		}
	}
}
