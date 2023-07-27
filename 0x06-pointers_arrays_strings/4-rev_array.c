#include "main.h"
#include <unistd.h>
/**
 * reverse_array - reverses the content of an array
 * @a:An array with integers
 * @n: Number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
