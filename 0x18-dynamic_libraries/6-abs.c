#include "main.h"
#include <unistd.h>

/**
* _abs -Computes the absolute value of an integer
*
* @c: The integer to be computed
*
* Return: Absolute value of integer or 0
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_vall;

		abs_vall = c * -1;
		return (abs_vall);
	}
	return (c);
}
