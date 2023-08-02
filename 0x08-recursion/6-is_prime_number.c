#include "main.h"

/**
 * is_prime_number - Returns 1 if prime number, otherwise 0
 * @n: Input integer
 * Return: 1 for prime number or 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
