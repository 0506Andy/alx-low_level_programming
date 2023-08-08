#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
char **strtow(char *str);

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words contained in @str.
 */
int count_words(char *str)
{
	int i, words = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words++;
				len = 0;
			}
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL, empty, or fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, words, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0, j = 0; j < words; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (k = i; str[k] != '\0' && str[k] != ' '; k++)
				len++;

			array[j] = malloc(sizeof(char) * (len + 1));
			if (array[j] == NULL)
			{
				for (; j >= 0; j--)
					free(array[j]);
				free(array);
				return (NULL);
			}

			for (k = 0; str[i] != '\0' && str[i] != ' '; i++, k++)
				array[j][k] = str[i];
			array[j][k] = '\0';
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
