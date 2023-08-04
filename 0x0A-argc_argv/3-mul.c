#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc:Count
 * @argv:Vector counted by argc
 * Return:0 otherwise 1 for failure
 */
int main(int argc, char *argv[])
{
	int a, b, ans;

	a = 0;
	b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ans = a * b;
	}
	else
	{
		printf("Error\n");
		return (1);

	}
	printf("%d\n", ans);
	return (0);
}
