#include "main.h"

/**
 * binary_to_uint - converts binary to unit
 * @b: pointer to string to be converted
 * Return: converted number or 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned long int result;
	unsigned int power;
	int i;

	result = 0;
	power = strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			result += (1 << power);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		power--;
	}
	return (result);
}
