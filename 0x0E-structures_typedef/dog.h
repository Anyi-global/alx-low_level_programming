#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct structure that holds dog elements
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
