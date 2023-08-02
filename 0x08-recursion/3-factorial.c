#include "main.h"
#include <unistd.h>

/**
 * factorial - Returns the factorialof a number
 * @n: Number to be factorised
 * Return: -1 if n<0or factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
