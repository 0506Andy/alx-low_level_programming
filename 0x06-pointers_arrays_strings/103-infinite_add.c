#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1:Integer number
 * @n2:Integer number
 * @r:Store buffer result
 * @size_r: buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int temp;
	int carry = 0, i = strlen(n1), j = strlen(n2), k = 0;
	if (i + 1 > size_r || j + 1 > size_r) return 0;
	r[size_r - 1] = 0;
	while (i || j || carry)
	{
		carry += i ? n1[--i] - '0' : 0;
		carry += j ? n2[--j] - '0' : 0;
		r[k++] = carry % 10 + '0';
		carry /= 10;
	}
	if (k == 0) r[k++] = '0';
	r[k] = 0;
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
    return (r);
}
