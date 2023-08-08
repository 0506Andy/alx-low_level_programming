#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer that contains a dumplicate
 * @str:dumplicate string to be returned
 * Return:NULL otherwise pointer
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, x;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	newstr = (char *)malloc((x + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	i = 0;
	for (i = 0; str[i]; i++)
		newstr[i] = str[i];

	newstr[x] = '\0';

	return (newstr);
}
