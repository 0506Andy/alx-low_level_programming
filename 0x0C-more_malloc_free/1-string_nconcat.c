#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1:String to be concatenated
 * @s2:String to be concatenated
 * @n:Number of bytes of n to be used
 * Return:pointer otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, i;
	char *ans;
	
	x = 0;
	y = 0;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	while (s1[x] != ('\0'))
		x++;
	while (s2[y] != ('\0'))
		y++;

	ans = (char *)malloc((x + n + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		ans[i] = s1[i];
	for (i = 0; i < n
			&& s2[i] != ('\0'); i++)
		ans[x + i] = s2[i];

	ans[x + n] = ('\0');
		return (ans);
}
