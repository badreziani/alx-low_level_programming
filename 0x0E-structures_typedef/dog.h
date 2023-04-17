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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
