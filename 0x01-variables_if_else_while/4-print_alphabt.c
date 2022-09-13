#include <stdio.h>
/**
 * main - starting point
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'e' && h != 'q')
	{
		putchar(h);
	}
	}
	putchar('\n');
	return (0);
}
