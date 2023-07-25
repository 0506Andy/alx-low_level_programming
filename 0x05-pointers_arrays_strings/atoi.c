#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: The string to be converted
 * Return: string
 */
int _atoi(char *s)
{
	int o, p, q, len, r, digit;

	o = 0;
	p = 0;
	q = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (o < len && r == o)
	{
		if (s[o] == '-')
			++p;
		if (s[o] >= '0' && s[o] <= '9')
		{
			digit = s[o] - '0';
			if (p % 2 == '0')
				digit = -digit;
			q = q * 10 + digit;
			r = 1;
			if (s[o + 1] < '0' || s[o + 1] > '9')
				break;
			r = 1;
		}
		o++;
	}
	return (0);
	return (q);
}
