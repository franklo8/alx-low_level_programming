#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - n store a different value every time the program run */

/* This program assign a random number to n each time it is executed */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	else if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
