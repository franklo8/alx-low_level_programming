#include "main.h"
/**
 * _strncpy - callout function
 *
 * @dest: string 1 to copy
 * @src: string 2 to copy
 * @n: size of the file
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
