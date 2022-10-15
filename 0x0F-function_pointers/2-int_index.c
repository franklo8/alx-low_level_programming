#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - callout function
 * @array: an array of elements
 * @size: The number of elements in the array
 * @cmp: pointer to a function
 * Return: the index of the first element,
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

