#include "holberton.h"

/**
* _strlen_recursion - returns the length of string
* @s: string whose length is to be returned
*
* Return: length of s
*/
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}

/**
* helper - check whther palindrome or not
* @str: string to check
* @i: beginning of string
* @j: end of string
*
* Return: 1 if palindrome, 0 if not
*/
int helper(char *str, int i, int j)
{
	if (i < j && str[i] == str[j])
		helper(str, i + 1, j - 1);
	if (str[i] != str[j])
		return (0);
	return (1);
}

/**
* is_palindrome - checks if palindrome
* @s: string to be checked
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int i = 0, j;

	j = _strlen_recursion(s) - 1;

	return (helper(s, i, j));
}
