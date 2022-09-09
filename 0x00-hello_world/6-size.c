#include <stdio.h>

/*This code gives the size of various types of variables on your computer*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	printf("The size of a c is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an i is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an li is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of an lli is: %lu.\n", (unsigned long)sizeof(lli));
	printf("The size of an f is: %lu.\n", (unsigned long)sizeof(f));
	
	return (0);

}
