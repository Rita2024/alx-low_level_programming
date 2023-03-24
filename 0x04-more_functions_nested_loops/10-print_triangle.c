#include "main.h"
/**
 * print_triangle - function that print a triangle, followed by a new line
 * @p: size of the square triangle
 * Return: nothing
 */

void print_triangle(int p)
{
	int x, y, z;

	if (p <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0 ; x < p ; x++)
		{
			for (y = p - x; y > 1 ; y--)
			{
				_putchar(32);
			}
			for (z = 0 ; z <= x ; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
