#include "main.h"

/**
 * jack_bauer - print every minite in the day
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%d%d:%d%d\n", i / 10, i % 10, j / 10, j % 10);
		}
	}
}
