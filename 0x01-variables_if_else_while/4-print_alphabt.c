#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print all alphabeth except two
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
