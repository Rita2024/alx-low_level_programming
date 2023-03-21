#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	int a;
	char r;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (r = 'a' ; r <= 'z' ; r++)
			_putchar(r);
		_putchar('\n');
	}
}
