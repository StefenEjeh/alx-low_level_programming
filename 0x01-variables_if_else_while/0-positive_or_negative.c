#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * Main - program starts here
 *
 * return 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("please enter a value of n: ");
	scanf("%d", &n);
	{
		if(n > 0)
		printf("%d is positive\n", n);
	}
	{
		if(n == 0)
		printf("%d is zero\n", n);
	}
	{
		if(n < 0)
		printf("%d is negative\n", n);
	}
	return(0);
}
