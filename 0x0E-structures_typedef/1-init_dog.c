#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
