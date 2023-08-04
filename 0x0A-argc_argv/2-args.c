#include "main.h"
#include <stdio.h>
void print_argument(int argc, char *argv[]);

/**
 * print_argument - Prints argument
 * @argc:Count
 * @argv:Argument
 * Return:void
 */
void print_argument(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
}

/**
 * main -Prints all argumentsit recieves
 * @argc:Size of argv
 * @argv:Array
 * Return:0 (success)
 */
int main(int argc, char *argv[])
{
	print_argument(argc, argv);
	return (0);
}
