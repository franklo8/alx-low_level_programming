#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocation function
 *
 * @b: integer to allocate a memory to
 *
 * Return: 0
 *
 */
void *malloc_checked(unsigned int b)
{
       void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
