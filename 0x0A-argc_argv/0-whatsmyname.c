#include <stdio.h>
#include "main.h"
/**
 * main - the argument parameters
 *
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
