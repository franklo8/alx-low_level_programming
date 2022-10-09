#include "main.h"
/**
 * _pow_recursion - function to raise a number to power y
 *
 * @x: value to raise
 * @y: power to raise
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
/*	int i;*/

	if (y > 0)
	{
		/*n = x * x;*/
		{
			return (x * _pow_recursion(x, (y - 1)));
		}
	}
	else /*if (y < 0)*/
	{
		return (-1);
	}
	return (0);
}
