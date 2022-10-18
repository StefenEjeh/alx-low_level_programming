#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print all alphabet lowercase
 *
 * Return: 0 for success
 */
int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return(0);
}
