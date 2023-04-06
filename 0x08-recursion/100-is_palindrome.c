#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int comparator(char *s, int n1, int n2);

/**
 * is_palindrome - detect if a string is a palindrome or not
 * @s: the string
 * Return: 1 if s is a palindrome, 0 is not a palindrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - compares each character of a string
 * @s: the string
 * @n1: the smallest iterator
 * @n2: the biggest iterator
 * Return: the result
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (comparator(s, n1 + 1, n2 - 1) + 0);
	}
	return (0);
}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		++s;
		return (_strlen_recursion(s) + 1);
	}
}
