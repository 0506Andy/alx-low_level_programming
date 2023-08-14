#include <stdio.h>

/**
 * main -Prints name of file it was compiled from
 * REturn:0(success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
