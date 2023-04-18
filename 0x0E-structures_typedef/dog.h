#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: containing dog's name, age and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
