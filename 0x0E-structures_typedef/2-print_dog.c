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
		if ((*d).name)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: %S\n", "(nil)");
		}
		if ((*d).age)
		{
			printf("Age: %f\n", (*d).age);
		}
		else
		{
			printf("Age: %s\n", "(nil)");
		}
		if ((*d).owner)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: %S\n", "(nil)");
		}
	}
}
