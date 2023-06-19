#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prits a dog
 * @d: the dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
