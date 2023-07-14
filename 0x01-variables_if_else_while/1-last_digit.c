#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;

	int last_digit;

	last_digit = n % 10;

	printf("Last digit of %d is %d\n", n, last_digit);
	return (0);

	srand(time(NULL));
	n = rand();

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf(" %d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf(" %d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
