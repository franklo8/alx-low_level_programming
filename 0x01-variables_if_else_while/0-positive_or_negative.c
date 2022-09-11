#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* main - This code returns if the value is positive or negative */

/* Tests if the value inputed is greater than or less than zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
