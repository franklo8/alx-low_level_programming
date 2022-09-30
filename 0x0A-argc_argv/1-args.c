#include <stdio.h>

/**
 * main - callout function
 *
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0); 
}
