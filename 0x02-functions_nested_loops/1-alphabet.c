#include "main.h"
/**
 * print_alphabet - functions that print alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char r;

	for (r = 'a' ; r <= 'z' ; r++)
		_putchar(r);
	_putchar('\n');
}
