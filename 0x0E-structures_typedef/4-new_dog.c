#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - get size
 *
 * @c: string
 *
 * Return: size
 */

int length(const char *c)
{
	int size;

	for (size = 0; c[size] != '\0'; size++)
	{
		;
	}
	return (size);
}

/**
 * copy - like strcpy
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *copy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f]; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';
	return (dest);
}

/**
 * new_dog - function
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner || age < 0)
	{
		return (NULL);
	}
	d = (dog_t *)malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (length(name) + 1));

	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (length(owner) + 1));

	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = copy(d->name, name);
	d->age = age;
	d->owner = copy(d->owner, owner);

	return (d);
}
