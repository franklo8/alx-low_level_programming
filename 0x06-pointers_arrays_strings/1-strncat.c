#include "main.h"
/**
 * _strncat - callout function
 * @dest: second file to join
 * @src: first file to join
 * 
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dest);
}
