#include "main.h"

/**
 * print_number - functions that print an integer
 * @n: number of integer to be printed
 * Return: result
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

