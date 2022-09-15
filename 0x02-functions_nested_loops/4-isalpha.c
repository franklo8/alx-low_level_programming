#include "main.h"
/**
 * _isalpha - Checks the alphabetic character
 *
 * @c: returns 1 if is a letter otherwise 0
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
