#include "main.h"
/**
 * _memcpy - copy number
 * @dest: content to copy
 * @src: Source of data to copy
 * @n: memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
