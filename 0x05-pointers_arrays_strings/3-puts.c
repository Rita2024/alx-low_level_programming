#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: the string to print
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
