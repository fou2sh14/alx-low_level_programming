#include "dog.h"
#include <stdlib.h>

/**
 * length - get string length
 *
 * @s: string
 *
 * Return: size
 */

int length(const char *s)
{
	int f = 0;

	while (*s++)
	{
		f++;
	}
	return (f);
}

/**
 * copy - copy string
 *
 * @a: first input
 *
 * @b: second one
 *
 * Return: copy
 */

char *copy(char *a, char *b)
{
	int f;

	for (f = 0; b[f]; f++)
	{
		a[f] = b[f];
	}
	a[f] = '\0';

	return (a);
}

/**
 * new_dog - create new dog
 *
 * @name: first one
 *
 * @age: second one
 *
 * @owner: third one
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	if (!name || !owner || age < 0)
	{
		return (NULL);
	}

	m = (dog_t *)malloc(sizeof(dog_t));

	if (m == NULL)
	{
		return (NULL);
	}

	m->name = malloc(sizeof(char) * (length(name) + 1));

	if ((*m).name == NULL)
	{
		free(m);
		return (NULL);
	}
	m->owner = malloc(sizeof(char) * (length(owner) + 1));

	if ((*m).owner == NULL)
	{
		free(m->name);

		free(m);
		return (NULL);
	}

	m->name = copy(m->name, name);

	m->age = age;

	m->owner = copy(m->owner, owner);
	return (m);

}
