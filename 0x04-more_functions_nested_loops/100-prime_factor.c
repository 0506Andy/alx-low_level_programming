#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor
 * Description: Largest prime number is 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long a, prime;
	long integer = 612852475143;
	double square = sqrt(integer);

	for (a = 1; a <= square; a++)
	{
		if (integer % a == 0)
		{
			prime = integer / a;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
