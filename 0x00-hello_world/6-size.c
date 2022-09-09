#include <stdio.h>

/*This code gives the size of various types of variables on your computer*/

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	printf("The size of a char is: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("The size of an long int is: %lu byte(s).\n", (unsigned long)sizeof(li));
	printf("The size of an long long int is: %lu byte(s).\n", (unsigned long)sizeof(lli));
	printf("The size of an float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	
	return (0);

}
