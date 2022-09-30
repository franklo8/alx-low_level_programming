#include <stdio.h>
#include <stdlib.h>
/**
 * main - callout function
 *
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: multiplier
 */
int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 1; i < argc; i++)
	{
		if (argc <= 1)
		{
			printf("Error");
			return (1);
		}
		else
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
			return(0);
		}

	}
}
