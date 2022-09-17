#include "main.h"
/**
 * more_numbers(void) - Callout functiion
 *
 * Description: prints numbers 0 - 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;
	int c, r;

	while (i <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			c = r;
			if (r > 9)
			{
				_putchar('1');
				r = c % 10;
			}
			_putchar('0' + r);
		}
		_putchar('\n');
		i++;
	}
}
