#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference between two integers
 * @a: First integers
 * @b: Second integers
 * Return: Difference between two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two integers
 * @a:First integer
 * @b:Second integer
 * Return:Product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the quotient of two integers
 * @a:First integer
 * @b:Secong integer
 * Return: The quotient of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of two integers
 * @a:First integer
 * @b:Second integer
 * Return: The remainder after the division of integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
