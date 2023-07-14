#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	long double e;



	printf("Size of char: %ld byte\n", sizeof(a));
	printf("Size of int: %ld bytes\n", sizeof(b));
	printf("Size of long int: %ld bytes\n", sizeof(c));
	printf("Size of long long: %ld bytes\n", sizeof(d));
	printf("Size of long double: %ld bytes\n", sizeof(e));
	return (0);
}
