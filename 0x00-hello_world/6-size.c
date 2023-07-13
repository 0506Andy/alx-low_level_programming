#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char is %ld byte(s)\n", sizeof(char));
	printf("The size of int is %ld byte(s)\n", sizeof(int));
	printf("The size of long is %ld byte(s)\n", sizeof(long));
	printf("The size of long long is %ld byte(s)\n", sizeof(long long));
	printf("The size of float is %ld byte(s)\n", sizeof(float));
	printf("The size of double is %ld byte(s)\n", sizeof(double));
	printf("The size of long double is %ld byte(s)\n", sizeof(long double));
	printf("The size of void* is %ld byte(s)\n", sizeof(void *));
	return (0);
}
