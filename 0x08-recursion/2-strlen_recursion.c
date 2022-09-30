#include "main.h"

/**
 * _strlen_recursion - callout function
 *
 * @s: string to find the length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
