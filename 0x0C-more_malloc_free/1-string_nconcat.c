#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - callout function
 *
 * @s1: first string
 * @s2: second string
 * @n: allocated size in bytes
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] !='\0')
	{
		size2++;
	}
	
	if (n > size2)
	{
		n = size2;
	}
	ptr = malloc((size1 + n + 1) * sizeof(char));
	
	if (ptr == NULL)
		return (0);
	
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	
	return (ptr);
}
