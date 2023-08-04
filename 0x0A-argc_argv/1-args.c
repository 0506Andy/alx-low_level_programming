#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc:Number of arguments
 * @argv:Command line arguments
 * Return:0 (success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
