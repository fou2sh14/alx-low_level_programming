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

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
