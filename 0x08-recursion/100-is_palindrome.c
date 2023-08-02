#include "main.h"

int check_len(char *s, int i, int len);
int _palindrome_recursion(char *s);

/**
 * is_palindrome - Returns 1 if string is a palindrome, 0 otherwise
 * @s:Strinf for length check
 * Return: 1 For palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_len(s, 0, _palindrome_recursion(s)));
}

/**
 * _palindrome_recursion - returns the length of a string
 * @s:String to check length
 * Return: length of the string
 */
int _palindrome_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _palindrome_recursion(s + 1));
}

/**
 * check_len - checks the characters recursively for palindrome
 * @s: string to check length
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_len(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_len(s, i + 1, len - 1));
}

