#include "main.h"

/**
 * puts2 - callout function
 *
 * @str: input
 *
 * return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((1 % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
