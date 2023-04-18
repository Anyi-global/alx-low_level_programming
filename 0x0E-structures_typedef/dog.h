#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct structure that holds dog elements
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: defines the structure of the dog type and their elements
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
	/* dog_t, a new name for the struct dog */
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
