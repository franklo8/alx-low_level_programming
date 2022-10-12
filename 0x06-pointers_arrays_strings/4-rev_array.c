#include "main.h"
/**
 * reverse_array - callout function
 *
 * @a: array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int num;

	while (i < n)
	{
		num = a[i];
		a[i++] = a[n - 1];
		a[n - 1] = num;
		num++;
	}
}
