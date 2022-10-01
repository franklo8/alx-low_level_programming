#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
