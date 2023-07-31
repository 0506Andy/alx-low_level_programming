#include "main.h"
#include <unistd.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s:pointer to a pointer
 * @to:pointers
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
