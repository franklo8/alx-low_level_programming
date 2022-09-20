#include "main.h"

/**
 * swap_int - Callout function
 *
 * @a: first number
 * @b: second number
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
