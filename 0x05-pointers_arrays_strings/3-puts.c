#include "main.h"
/**
 * _puts - callout function
 *
 * @str: prints the character to stdout
 *
 * Return: 1
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
