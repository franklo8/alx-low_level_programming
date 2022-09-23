#include "main.h"
/**
 * _strcat - callout function
 *
 * @dest: string to be appended into
 *
 * @src: string to append
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}
