#include "main.h"
/**
 * _islower - checks if the character is lowercase
 *
 * @c: is the int that will use for the argument
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
