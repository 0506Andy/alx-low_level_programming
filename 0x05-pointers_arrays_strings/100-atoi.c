#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: The string to be converted
 * Return: string
 */
int _atoi(char *s)
{
	int result, sign, i;

	result = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
