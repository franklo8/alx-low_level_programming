#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to initialize variable
 *
 * @d: struct parameter
 * @name: dog name
 * @age: dog age
 * @owner: the owner of the dog
 *
 * Description: This function calls the variable
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
