#include "main.h"

/***/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; )
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
