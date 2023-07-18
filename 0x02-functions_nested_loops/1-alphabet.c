#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Description - this program prints the alphabets in lowercase
 *
 * Return : void
 */
void print_alphabet(void)
{
	char letter;



	for
		(letter = 'a';
		 letter <= 'z';
		 letter++);
	{
		_putchar(letter);
	}
	_putchar('\n');
}
