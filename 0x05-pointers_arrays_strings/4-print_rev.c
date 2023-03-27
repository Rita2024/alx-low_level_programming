#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to be print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	for (p -= 1 ; p >= 0 ; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
