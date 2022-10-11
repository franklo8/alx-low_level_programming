#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: structure
 *
 * Description: The function prints the value of struct dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	struct dog;
	
	if (d == NULL)
	{
		printf("%s\n", "nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
