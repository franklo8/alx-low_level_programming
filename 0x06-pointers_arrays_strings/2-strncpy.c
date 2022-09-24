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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
