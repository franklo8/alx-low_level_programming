#include "main.h"
#include <stdlib.h>
/**
 * _strdup - calloff function
 *
 * @str: string to copy
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptstr;
	int str_len = 0;
	int c;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptstr = malloc((str_len * sizeof(char)) + 1);

	if (ptstr == NULL)
	{
		return (NULL);
	}


	for (c = 0; str[c] != '\0'; c++)
	{
		ptstr[c] = str[c];
	}
	ptstr[c] = '\0';

	return (ptstr);
}
