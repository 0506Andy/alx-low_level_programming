#include "main.h"

int is_prime_real(int n, int i);

/**
 * is_prime_number - Returns 1 if prime number, otherwise 0
 * @n: Input integer
 * Return: 1 for prime number or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime_real(n, 3));
}

/**
 * is_prime_real - Recursive functio for finding prime number
 * @n: Input integer
 * @i: iterator
 * Return: 1 for prime number or 0 otherwise
 */
int is_prime_real(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_real(n, i + 2));
}
