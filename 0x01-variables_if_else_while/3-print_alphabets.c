#include <stdio.h>
/**
 * main - starting point
 *
 * Description: 'Prints in lowercase then in UPPERCASE'
 *
 * Return: lower and UPPER case characters
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
