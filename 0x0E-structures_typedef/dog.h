#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
*struct dog- struct
*@name: the name of dog
*@age: dog's age
*@owner: dog's owner
*Return: void
**/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
