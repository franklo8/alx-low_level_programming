#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - callout function
 *
 * @array: an array argument
 * @size: size of the array
 * 
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
