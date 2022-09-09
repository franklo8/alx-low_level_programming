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

	printf("The size of a char is: %lu byte(s) \n", sizeof(c));
	printf("The size of an int is: %lu byte(s) \n", sizeof(i));
	printf("The size of an long int is: %lu byte(s) \n", sizeof(li));
	printf("The size of an long long int is: %lu byte(s) \n", sizeof(ll));
	printf("The size of an float is: %lu byte(s) \n", sizeof(f));
	return (0);

}
