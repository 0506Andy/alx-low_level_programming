#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
