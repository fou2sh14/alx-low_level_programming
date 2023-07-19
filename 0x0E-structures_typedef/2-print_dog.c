#include "dog.h"
#include <stdio.h>

/**
 * print_dog - to print
 *
 * @d: object
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == 0)
		{
			printf("%s\n", "Name: (nil)");
		}
		else
		{
			printf("%s%s\n", "Name: ", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == 0)
		{
			printf("%s\n", "Owner: (nil)");
		}
		else
		{
			printf("%s%s\n", "Owner: ", d->owner);
		}
	}
}
