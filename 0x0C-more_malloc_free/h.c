#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * multiply - multiplies two integers
 * @num1:multicand
 * @num2:multiplier
 * Return:(num1 * num2)
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_digit - checks if number is positive
 * @str:pointer to a number to be checked
 * Return:1
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * print_number - prints a number
 * @num:number to be printed
 * Return:void
 */
void print_number(int num)
{
	int reverse;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	reverse = 0;
	while (num > 0)
	{
		reverse = reverse * 10 + num % 10;
		num /= 10;
	}
	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}
}

/**
 * atoi - changes string to integer
 * @str:string to be changed
 * Return: result on Success
 */
int atoi(const char *str)
{
	int result, sign, i, digit;

	result = 0;
	sign = 1;
	i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++)
	{
		digit = str[i] - '0';

		if (digit >= 0 && digit <= 9)
		{
			result = result * 10 + digit;
		}
		else
		{
			break;
		}
	}
	result *= sign;

	return (result);
}

/**
 * main - multiplies two number
 * argc: number of arguments
 * argv: arrays
 * Return:0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 ||
			!is_digit(argv[1]) ||
			!is_digit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	print_number(result);
	_putchar('\n');

	return (0);
}
