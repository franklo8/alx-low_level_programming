#include "main.h"
/**
 * print_alphabet - starting point
 *
 * Description: 'A function that prints the alphabet'
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
