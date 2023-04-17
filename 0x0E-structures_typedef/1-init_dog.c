#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: input pointer to struct dog
 * @name: name to initialize
 * @age: dog age
 * @owner: The dog owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
