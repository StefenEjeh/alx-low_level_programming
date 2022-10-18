#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print out alphabeth in lower and uppercaes
 *
 * Return: Always 0 for success
 *
 */
int main(void)
{
	char letter = 'a';
	char lesser = 'A';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (lesser <= 'Z')
	{
		putchar(lesser);
		lesser++;
	}
	putchar('\n');
	return (0);
}
