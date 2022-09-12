#include <stdio.h>
/**
 * main - starting point
 *
 * Description: All possible combinations of single digit
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 35; i <= 44; i++)
	{
		putchar(i);
		if (i != 44)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
