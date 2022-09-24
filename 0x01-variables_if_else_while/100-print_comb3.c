#include <stdio.h>
/**
 * main - starting point
 *
 * Description: All possible combination of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; j <= 57; i++)
	{
		for (j = i + 1;j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if ((i == 56) && (j == 57))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
