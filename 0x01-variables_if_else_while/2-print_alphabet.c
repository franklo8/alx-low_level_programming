#include <stdio.h>

/**
 * main - starting point
 *
 * Description: 'Prints alphabets in lower case'
 *
 * Return: lower case alphabets.
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
