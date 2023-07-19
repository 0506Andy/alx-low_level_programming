#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms
 *
 * >4000000
 *
 * Return:void
 */
int main(void)
{
	int i = 0;

	long j = 1, k = 2, add = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			add += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", add);
	return (0);
}
