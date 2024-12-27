#include "dog.h"
#include <string.h>
/**
 * new_dog - dynamicly allocats a struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return a pointer to dynamicly allocated struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogj;

	new_dogj = malloc(sizeof(dog_t));

	if (new_dogj != NULL)
	{

		new_dogj->name = malloc(strlen(name) + 1);
		if (name == NULL)
		{
			free(new_dogj->name);
			free(new_dogj);
			return (NULL);
		}
		new_dogj->owner = malloc(strlen(owner) + 1);
		if (new_dogj->owner == NULL)
		{
			free(new_dogj->name);
			free(new_dogj->owner);
			free(new_dogj);
			return (NULL);
		}

		new_dogj->name = strcpy(new_dogj->name, name);
		new_dogj->owner = strcpy(new_dogj->owner, owner);
		new_dogj->age = age;
		return (new_dogj);
	}
	else
	{
		free(new_dogj);
		return (NULL);
	}
}
