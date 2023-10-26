#include "main.h"
/**
 * get_endianness - checks endianess
 * Return:void
 */
int get_endianness(void)
{
	int num = 1;
	char  *ptr = (char *)&num;

	return ((int)(*ptr));
}
