#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: assign a random number to the variable n
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, n);
	}
	else if ((n < 6) && n != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n);
	}
	return (0);
}
