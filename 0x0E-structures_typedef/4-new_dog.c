#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate the lenght of a string
 * @s: the string
 * Return: the lenghth of s
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * duplicate - duplicate a string
 * @s: the string to duplicate
 * Return: a copy of the original string
 */
char *duplicate(char *s)
{
	int len;
	char *copy;

	len = _strlen(s);
	if (len == 0)
		return (NULL);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	for (len = 0; s[len] != '\0'; len++)
		copy[len] = s[len];
	copy[len] = '\0';
	return (copy);
}
/**
 * new_dog - creates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner
 * Return: a dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len;

	new_dog = malloc(sizeof(*new_dog));
	if (!new_dog)
		return (NULL);

	new_dog->name = duplicate(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = duplicate(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
