#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @n: Elements of array to be printed
 * @a: Name of array
 * Return: Elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
