#include "main.h"
/**
 * _isupper - checks if the file is uppercase
 *
 * @c: is the lette been checked
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
