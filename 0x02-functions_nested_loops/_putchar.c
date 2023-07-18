#include <unistd.h>
#include"main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char message[] = "_putchar\n";


	int len = sizeof(message) - 1;

	write(1, message, len);

	return (0);
}
