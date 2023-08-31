#include "main.h"

/**
 * binary_to_uint - converts binary to unit
 * @b: pointer to string to be converted
 * Return: converted number or 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result , power;
	int i, length;

	result = 0;
	power =  1;
	length = strlen(b);

	if (b == NULL)
		return (0);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == ('1'))
		{
			result += power;
		}
		else if (b[i] != ('0'))
		{
			return (0);
		}
		power *= 2;
	}
	return (result);
}
