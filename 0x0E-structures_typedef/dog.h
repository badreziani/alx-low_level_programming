#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog type
 * @name: pointer to char
 * @age: floating number
 * @owner: pointer to char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
