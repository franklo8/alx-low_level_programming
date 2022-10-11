#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 *
 * @name: Name of the dog
 * @age: The dog's age
 * @owner: who is the owner
 *
 * Description: This is a database of dogs in my area
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
