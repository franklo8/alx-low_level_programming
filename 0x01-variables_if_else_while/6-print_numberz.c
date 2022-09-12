#include <stdio.h>
/**
 * main - starting point
 *
 * Description: 'Prints single digit numbers'
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
