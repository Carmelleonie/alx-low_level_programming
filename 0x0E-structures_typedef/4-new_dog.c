#include "dog.h"
#include <stdlib.h>

/**
*new_dog - create a new dog
*@name: The name of the member
*@age: the age of the dog
*@owner: the dog's owner
*Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;

	struct dog *new_dog = NULL;

	j = 0;
	while (name[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (owner[k] != '\0')
	{
		k++;
	}
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(j + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(k + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (i = 0; i <= k; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->age = age;
	return (new_dog);
}
