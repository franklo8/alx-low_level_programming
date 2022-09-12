#include <stdio.h>
/**
 * main - starting point
 *
 * Description: 'prints alphabets backwards'
 *
 * Return: 0
 */
int main(void)
{
	char hpla;

	for (hpla = 'z'; hpla >= 'a'; --hpla)
	{
		putchar(hpla);
	}
	putchar('\n');
	return (0);
}
