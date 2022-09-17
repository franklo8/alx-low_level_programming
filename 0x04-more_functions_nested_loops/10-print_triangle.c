#include "main.h"
/**
 * print_triangle - callout function
 *
 * @size: hieght of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
