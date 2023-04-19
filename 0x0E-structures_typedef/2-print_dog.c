#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct
 *
 * @d: first input
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %S\n", (*d).name ? (*d).name : "(nil)");

		printf("Age: %f\n", (*d).age ? (*d).age : "(nil)");

		printf("owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
