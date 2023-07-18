#include "main.h"
#include <unistd.h>

/**
 *main - prints alphabet in lower case
 *
 * Description - this program prints the alphabets in lowercase
 *
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
