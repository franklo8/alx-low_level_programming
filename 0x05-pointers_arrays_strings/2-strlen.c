#include "main.h"

/**
 * _strlen - Callout function
 *
 * @*s: Character to count
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
