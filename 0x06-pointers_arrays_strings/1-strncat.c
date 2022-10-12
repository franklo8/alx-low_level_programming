#include "main.h"
/**
 * _strncat - callout function
 * @dest: second file to join
 * @src: first file to join
 * @n: length of array
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *ptr = dest;

	while (ptr[i] != 0)
	{
		ptr++;
	}
	while (j < n && src[j] != 0)
	{
		ptr[i] = src[j];
		i++;
		j++;
	}

	ptr[i] = '\0';

	return (dest);
}
