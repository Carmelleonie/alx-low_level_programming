#include "dog.h"

/**
*print_dog - print struct of dog
*@d: pointer
*Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name : %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
