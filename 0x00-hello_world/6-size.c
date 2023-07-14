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
	float f;

printf("The size of char is %ld byte(s)\n", (unsigned long)sizeof(a));
printf("The size of int is %ld byte(s)\n", (unsigned long)sizeof(b));
printf("The size of long is %ld byte(s)\n", (unsigned long)sizeof(c));
printf("The size of long long is %ld byte(s)\n", (unsigned long)sizeof(d));
printf("The size of float is %ld byte(s)\n", (unsigned long) sizeof(e));
return (0);
}
