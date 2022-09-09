#include <stdio.h>

/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value  if errors.
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int ll;
	float f;

	fprintf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
	fprintf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
	fprintf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(li));
	fprintf("Size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(ll));
	fprintf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);

}
