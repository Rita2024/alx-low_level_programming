#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string to be treated
 * Return: 0
 */

void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0 ; a < b ; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
