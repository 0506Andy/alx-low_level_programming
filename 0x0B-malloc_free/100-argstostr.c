#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * argstostr - concatenates all the arguments
 * @ac:number of arguments passed
 * @av:array of string
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c, d;

	c = 0;
	d = 0;

	if (ac == 0 ||
			av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
		d++;
	}
	str = malloc((d + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = ('\n');
		c++;
	}
	str[c] = ('\0');

	return (str);
}
