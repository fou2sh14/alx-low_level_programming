#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * struct dog - new type
 *
 * @name: first member
 *
 * @age: second
 *
 * @owner: third
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

#endif
