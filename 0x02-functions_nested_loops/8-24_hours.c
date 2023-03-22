#include "main.h"
/**
 * jack_bauer - print 24hrs time
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int p;
	int q;

	for (p = 0 ; p < 24 ; p++)
	{
		for (q = 0 ; q < 60 ; q++)
		{
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar(':');
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar('\n');
		}
	}
}
