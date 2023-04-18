#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: pointer to char
 * @age: floating number
 * @owner: pointer to char
 * Return: pointer to struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ni, oi;
	dog_t *dog;

	ni = oi = 0;
	while (name[ni++] != '\0')
		;
	while (owner[oi++] != '\0')
		;
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(ni * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(oi * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (ni = 0; name[ni] != '\0'; ni++)
		dog->name[ni] = name[ni];
	dog->name[ni] = name[ni];
	dog->age = age;
	for (oi = 0; owner[oi] != '\0'; oi++)
		dog->owner[oi] = owner[oi];
	dog->owner[oi] = owner[oi];
	return (dog);
}
