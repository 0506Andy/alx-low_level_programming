#include "main.h"
#include <unistd.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped with integer a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
