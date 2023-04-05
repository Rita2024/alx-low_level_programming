#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the string to print in reverse
 * Return: the result
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
