#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: the dog's age
 * @owner: the owner's name
 * Return: the new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int lname = 0, lowner = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[lname] != '\0')
		lname++;

	new_dog->name = malloc(lname + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	while (owner[lowner] != '\0')
		lowner++;

	new_dog->owner = malloc(lowner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		new_dog->name[lname] = name[lname];
	new_dog->name[lname] = '\0';

	new_dog->age = age;
	for (lowner = 0; owner[lowner]; lowner++)
		new_dog->owner[lowner] = owner[lowner];
	new_dog->owner[lowner] = '\0';

	return (new_dog);
}
