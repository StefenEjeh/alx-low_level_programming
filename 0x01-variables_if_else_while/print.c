#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints
 *
 * Return: o for success
 */
int main(void)
{
	char less = 'c';
	
	while (less <= 'w')
	{
		putchar(less);
		less++;
	}
	putchar('\n');
	return(0);
}
