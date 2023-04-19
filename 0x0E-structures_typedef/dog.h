#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new data type called dog
 *
 * @name: first member
 *
 * @age: second member
 *
 * @owner: third member
 *
 * Description: its a new data type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
