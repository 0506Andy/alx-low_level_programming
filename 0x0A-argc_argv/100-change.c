#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints min number to change amount of money
 * @argc:count
 * @argv:vector
 * Return: 0 (Success) otherwise 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, k, ans;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	ans = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && n >= 0; k++)
	{
		while (n >= coins[k])
		{
			ans++;
			n -= coins[k];
		}
	}

	printf("%d\n", ans);
	return (0);
}
