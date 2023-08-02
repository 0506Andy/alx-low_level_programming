#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion - Returns the value of x raised tonthe power of y
 * @x:Value to be multiplied
 * @y:Value of the number of times to multiply x
 * Return:Power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
