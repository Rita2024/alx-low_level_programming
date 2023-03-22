#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @p: parameter to be printed
 * Return: r (success)
 */

int print_last_digit(int p)
{
	int r;

	r = p % 10;
	if (p < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
