#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog type
 * @name: pointer to char
 * @age: floating number
 * @owner: pointer to char
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
