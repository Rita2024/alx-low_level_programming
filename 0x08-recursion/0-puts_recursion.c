#include "main.h"

/**
 * _puts_recursion - functions that prints a string, followed by a newline
 * @s: the string to print
 * Return: result
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
