#include "main.h"

/**
 * _strlen_recursion - functions that returns the length of a string
 * @s: the length of a string
 * Return: the result value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return  (0);
	}
	else
	{
		++s;
		return (1 + _strlen_recursion(s));
	}
}
