#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 * @void: Empty parameter list for main.
 *
 * Description: this if/else statement declares if the given input
 * is great/less of a random number
 * return 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);
	{
		if (n > 5)
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	{
		if (n == 0)
		printf("Last digit of n is %d and is 0\n", n);
	}
	{
		if (n < 6 &&! 0)
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
