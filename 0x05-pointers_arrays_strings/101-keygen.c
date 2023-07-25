#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random password
 * Password for program 101-crackme
 * Return: 0 (Success)
 */

int main(void)
{
	int passw[100];
	int n, add, m;

	add = 0;
	srand(time(NULL));

	for (n = 0; n < 100; n++)
	{
		passw[n] = rand() % 78;
		add += (passw[n] + '0');
		putchar(passw[n] + '0');

		if
			((2772 - add)
				- ('0' < 78))
		{
			m = 2772 - add - '0';
			add += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
