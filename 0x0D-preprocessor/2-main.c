#include <stdio.h>

#define MAIN_C

/**
 * main - Prints name of file it was colpiled from
 * REturn:0(success)
 */
int main(void)
{
printf("%s\n", __BASE_FILE__);
return (0);
}
