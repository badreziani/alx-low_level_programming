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
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
