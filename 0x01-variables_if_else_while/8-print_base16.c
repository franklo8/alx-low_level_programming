#include <stdio.h>
/**
 * main - starting point
 *
 * Description: prints base 16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
