#include "dog.h"
#include <stdlib.h>

/**
*init_dog - struture intialization
*@d: pointer to structure
*@name: dog's name
*@age: age
*@owner: the owner
*Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
