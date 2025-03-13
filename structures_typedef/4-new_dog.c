#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copy read-only data to mutable.
 * @dst: pointer to copy char to.
 * @src: read-only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

/**
 * new_dog - create a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogj;
	int a, b;


	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;


	dogj = malloc(sizeof(dog_t));
	if (dogj == NULL)
		return (NULL);


	dogj->name = malloc(a + 1);
	dogj->owner = malloc(b + 1);

	if (dogj->name == NULL || dogj->owner == NULL)
	{

		free(dogj->name);
		free(dogj->owner);
		free(dogj);
		return (NULL);
	}


	_strcopy(dogj->name, name);
	_strcopy(dogj->owner, owner);
	dogj->age = age;

	return (dogj);
}

