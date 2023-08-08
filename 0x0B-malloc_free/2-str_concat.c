#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1:string to be concatenated
 * @s2:string to be concatenated
 * Return: pointer otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int x, y, i, j;

	x = 0;
	y = 0;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	while (s1[x])
		x++;
	while (s2[y])
		y++;

	newstr = (char *)malloc((x + y + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		newstr[i] = s1[i];
	for (j = 0; s2[j]; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = ('\0');

	return (newstr);
}
