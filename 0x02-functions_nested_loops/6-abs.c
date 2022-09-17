#include "main.h"
/**
* _abs - callout function
*
* @c: checks if the value is absolute
*
* Return: 0
*/
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
	return (0);
}
