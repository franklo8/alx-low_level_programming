#include "main.h"

/**
 * print_line - callout function
 *
 * @n: line to print
 *
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
